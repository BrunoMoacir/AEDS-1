#include "pessoas.h"
#include "aluno.h"
#include "professor.h"
#include <fstream>
#include <string>

// Variáveis globais para controlar os dados.
// Em projetos maiores, o ideal seria encapsular isso em uma classe.
int TAM = 0;
char tipos[MAX]; // 'A' para Aluno, 'P' para Professor

// Implementação da classe Pessoa
int Pessoa::contador = 0;

Pessoa::Pessoa() { contador++; }
Pessoa::~Pessoa() { contador--; }
int Pessoa::getContador() { return contador; }

void Pessoa::setNome(std::string n) { nome = n; }
std::string Pessoa::getNome() const { return nome; }

bool Pessoa::setCPF(std::string c)
{
    // Validação simples do formato do CPF
    if (c.length() == 14 && c[3] == '.' && c[7] == '.' && c[11] == '-')
    {
        cpf = c;
        return true;
    }
    return false;
}
std::string Pessoa::getCPF() const { return cpf; }

bool Pessoa::setNascimento(int dia, int mes, int ano)
{
    return nascimento.setData(dia, mes, ano);
}
Data Pessoa::getNascimento() const { return nascimento; }

void Pessoa::leiaPessoa()
{
    std::cout << "Nome: ";
    std::getline(std::cin, nome);

    std::string tempCpf;
    do
    {
        std::cout << "CPF (formato 000.000.000-00): ";
        std::getline(std::cin, tempCpf);
        if (!setCPF(tempCpf))
        {
            std::cout << "Formato de CPF invalido. Tente novamente.\n";
        }
    } while (getCPF() != tempCpf);

    std::cout << "Data de nascimento:\n";
    nascimento.leiaData();
}

void Pessoa::escrevePessoa() const
{
    std::cout << "\nNome: " << nome << "\nCPF: " << cpf << "\nNascimento: ";
    nascimento.escreveData();
    std::cout << "\nIdade: " << calcularIdade(nascimento);
}

// --- FUNÇÕES DE PERSISTÊNCIA (CORRIGIDAS) ---

// Função auxiliar para escrever uma string de forma segura
void writeString(std::ofstream &arq, const std::string &str)
{
    size_t len = str.size();
    arq.write(reinterpret_cast<const char *>(&len), sizeof(len));
    arq.write(str.c_str(), len);
}

// Função auxiliar para ler uma string de forma segura
std::string readString(std::ifstream &arq)
{
    size_t len;
    arq.read(reinterpret_cast<char *>(&len), sizeof(len));
    if (len > 0)
    {
        char *buffer = new char[len + 1];
        arq.read(buffer, len);
        buffer[len] = '\0';
        std::string str(buffer);
        delete[] buffer;
        return str;
    }
    return "";
}

void gravaPessoas(Pessoa *pessoas[])
{
    std::ofstream arq("pessoas.dat", std::ios::binary);
    if (!arq)
    {
        std::cerr << "Erro ao abrir arquivo para gravacao!\n";
        return;
    }

    // Primeiro, grava o número de pessoas
    arq.write(reinterpret_cast<const char *>(&TAM), sizeof(TAM));

    for (int i = 0; i < TAM; i++)
    {
        // 1. Grava o tipo ('A' ou 'P')
        arq.write(&tipos[i], sizeof(char));

        // 2. Grava os dados da classe Pessoa (nome, cpf, data)
        writeString(arq, pessoas[i]->getNome());
        writeString(arq, pessoas[i]->getCPF());
        Data nasc = pessoas[i]->getNascimento();
        arq.write(reinterpret_cast<const char *>(&nasc), sizeof(Data));

        // 3. Grava o dado específico da classe filha
        if (tipos[i] == 'A')
        {
            writeString(arq, dynamic_cast<Aluno *>(pessoas[i])->getMatricula());
        }
        else
        {
            writeString(arq, dynamic_cast<Professor *>(pessoas[i])->getArea());
        }
    }
    arq.close();
    std::cout << "Dados salvos com sucesso!\n";
}

void carregaPessoas(Pessoa *pessoas[])
{
    std::ifstream arq("pessoas.dat", std::ios::binary);
    if (!arq)
    {
        std::cout << "Arquivo de dados nao encontrado. Comecando com lista vazia.\n";
        TAM = 0;
        return;
    }

    // Primeiro, lê o número de pessoas
    arq.read(reinterpret_cast<char *>(&TAM), sizeof(TAM));

    // Verifica se a leitura foi bem-sucedida e se TAM é válido
    if (arq.fail() || TAM < 0 || TAM > MAX)
    {
        TAM = 0;
        arq.close();
        return;
    }

    for (int i = 0; i < TAM; i++)
    {
        // 1. Lê o tipo
        arq.read(&tipos[i], sizeof(char));

        // Se a leitura falhar, interrompe o loop
        if (arq.eof())
        {
            TAM = i; // Ajusta o tamanho real lido
            break;
        }

        // 2. Cria o objeto do tipo correto
        if (tipos[i] == 'A')
        {
            pessoas[i] = new Aluno();
        }
        else if (tipos[i] == 'P')
        {
            pessoas[i] = new Professor();
        }
        else
        {
            // Tipo inválido, pula este registro
            continue;
        }

        // 3. Lê os dados e popula o objeto
        pessoas[i]->setNome(readString(arq));
        pessoas[i]->setCPF(readString(arq));
        Data nasc;
        arq.read(reinterpret_cast<char *>(&nasc), sizeof(Data));
        pessoas[i]->setNascimento(nasc.getDia(), nasc.getMes(), nasc.getAno());

        // 4. Lê o dado específico da classe filha
        if (tipos[i] == 'A')
        {
            dynamic_cast<Aluno *>(pessoas[i])->setMatricula(readString(arq));
        }
        else
        {
            dynamic_cast<Professor *>(pessoas[i])->setArea(readString(arq));
        }
    }
    arq.close();
}

void abertura(Pessoa *pessoas[])
{
    carregaPessoas(pessoas);
    std::cout << "Carregados " << TAM << " registros.\n";
}

void despedida(Pessoa *pessoas[])
{
    gravaPessoas(pessoas);
    // Libera a memória alocada para cada pessoa
    for (int i = 0; i < TAM; i++)
    {
        delete pessoas[i];
        pessoas[i] = nullptr; // Boa prática para evitar ponteiros "soltos"
    }
}

// --- IMPLEMENTAÇÃO DOS SUBMENUS ---

void submenuCadastro(Pessoa *pessoas[])
{
    if (TAM >= MAX)
    {
        std::cout << "Atingido o limite maximo de cadastros!\n";
        return;
    }
    char tipo;
    std::cout << "Deseja cadastrar um Aluno (A) ou Professor (P)? ";
    std::cin >> tipo;
    std::cin.ignore();
    tipo = toupper(tipo);

    if (tipo == 'A')
    {
        pessoas[TAM] = new Aluno();
        std::cout << "\n--- Cadastro de Aluno ---\n";
        pessoas[TAM]->leiaPessoa();
        tipos[TAM] = 'A';
        TAM++;
        std::cout << "Aluno cadastrado com sucesso!\n";
    }
    else if (tipo == 'P')
    {
        pessoas[TAM] = new Professor();
        std::cout << "\n--- Cadastro de Professor ---\n";
        pessoas[TAM]->leiaPessoa();
        tipos[TAM] = 'P';
        TAM++;
        std::cout << "Professor cadastrado com sucesso!\n";
    }
    else
    {
        std::cout << "Opcao invalida.\n";
    }
}

void submenuListagem(Pessoa *pessoas[])
{
    if (TAM == 0)
    {
        std::cout << "Nenhuma pessoa cadastrada.\n";
        return;
    }
    std::cout << "\n--- Lista de Pessoas Cadastradas ---\n";
    for (int i = 0; i < TAM; i++)
    {
        pessoas[i]->escrevePessoa();
        std::cout << "\n-------------------------------------\n";
    }
}

void submenuPesquisaNome(Pessoa *pessoas[])
{
    if (TAM == 0)
    {
        std::cout << "Nenhuma pessoa cadastrada.\n";
        return;
    }
    std::string nomeBusca;
    std::cout << "Digite o nome para pesquisar: ";
    std::getline(std::cin, nomeBusca);

    bool encontrou = false;
    for (int i = 0; i < TAM; i++)
    {
        // string::npos significa que a substring não foi encontrada
        if (pessoas[i]->getNome().find(nomeBusca) != std::string::npos)
        {
            std::cout << "\n--- Registro Encontrado ---\n";
            pessoas[i]->escrevePessoa();
            std::cout << "\n---------------------------\n";
            encontrou = true;
        }
    }
    if (!encontrou)
    {
        std::cout << "Nenhum registro encontrado com esse nome.\n";
    }
}

void submenuPesquisaCPF(Pessoa *pessoas[])
{
    if (TAM == 0)
    {
        std::cout << "Nenhuma pessoa cadastrada.\n";
        return;
    }
    std::string cpfBusca;
    std::cout << "Digite o CPF para pesquisar (000.000.000-00): ";
    std::getline(std::cin, cpfBusca);

    bool encontrou = false;
    for (int i = 0; i < TAM; i++)
    {
        if (pessoas[i]->getCPF() == cpfBusca)
        {
            std::cout << "\n--- Registro Encontrado ---\n";
            pessoas[i]->escrevePessoa();
            std::cout << "\n---------------------------\n";
            encontrou = true;
            break; // CPF é único, pode parar a busca
        }
    }
    if (!encontrou)
    {
        std::cout << "CPF nao encontrado.\n";
    }
}

void submenuExcluir(Pessoa *pessoas[])
{
    if (TAM == 0)
    {
        std::cout << "Nenhuma pessoa cadastrada para excluir.\n";
        return;
    }
    std::string cpfBusca;
    std::cout << "Digite o CPF da pessoa a ser excluida: ";
    std::getline(std::cin, cpfBusca);

    int indiceExcluir = -1;
    for (int i = 0; i < TAM; i++)
    {
        if (pessoas[i]->getCPF() == cpfBusca)
        {
            indiceExcluir = i;
            break;
        }
    }

    if (indiceExcluir != -1)
    {
        // Libera a memória do objeto a ser excluído
        delete pessoas[indiceExcluir];

        // "Puxa" os elementos seguintes para preencher o espaço
        for (int i = indiceExcluir; i < TAM - 1; i++)
        {
            pessoas[i] = pessoas[i + 1];
            tipos[i] = tipos[i + 1];
        }
        TAM--; // Diminui o tamanho total
        std::cout << "Registro excluido com sucesso!\n";
    }
    else
    {
        std::cout << "CPF nao encontrado.\n";
    }
}

void submenuApagarTodos(Pessoa *pessoas[])
{
    if (TAM == 0)
    {
        std::cout << "A lista ja esta vazia.\n";
        return;
    }
    char confirm;
    std::cout << "TEM CERTEZA que deseja apagar TODOS os registros? (S/N): ";
    std::cin >> confirm;
    std::cin.ignore();

    if (toupper(confirm) == 'S')
    {
        for (int i = 0; i < TAM; i++)
        {
            delete pessoas[i];
            pessoas[i] = nullptr;
        }
        TAM = 0; // Reseta o contador
        std::cout << "Todos os registros foram apagados.\n";
    }
    else
    {
        std::cout << "Operacao cancelada.\n";
    }
}

void aniversariantesMes(Pessoa *pessoas[])
{
    if (TAM == 0)
    {
        std::cout << "Nenhuma pessoa cadastrada.\n";
        return;
    }
    int mesAtual;
    std::cout << "Digite o mes para verificar os aniversariantes (1-12): ";
    std::cin >> mesAtual;
    std::cin.ignore();

    if (mesAtual < 1 || mesAtual > 12)
    {
        std::cout << "Mes invalido.\n";
        return;
    }

    std::cout << "\n--- Aniversariantes do Mes " << mesAtual << " ---\n";
    bool encontrou = false;
    for (int i = 0; i < TAM; i++)
    {
        if (pessoas[i]->getNascimento().getMes() == mesAtual)
        {
            std::cout << "Nome: " << pessoas[i]->getNome()
                      << " - Dia: " << pessoas[i]->getNascimento().getDia() << std::endl;
            encontrou = true;
        }
    }
    if (!encontrou)
    {
        std::cout << "Nenhum aniversariante encontrado para este mes.\n";
    }
}