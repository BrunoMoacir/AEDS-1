#include <iostream>
#include <string>

using namespace std;

#define MAX 100
class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    bool setDia(int dia);
    bool setMes(int mes);
    bool setAno(int ano);

    Data();                          // construtor vazio
    Data(int ano);                   // construtor so com ano
    Data(int dia, int mes, int ano); // construtor

    bool setData(); // data padrao == 0/0/0
    bool setData(int ano);
    bool setData(int dia, int mes, int ano);

    int getDia();
    int getMes();
    int getAno();

    bool dataValida();
    bool mesIgual(int mes);
    string mesExtenso();

    int diaMes();
    void escreveData();
    void leiaData();
};
static Data dataAtual();
static int calculaIdade(const Data &nascimento); // calcula idade com base do nascimento

string Data::mesExtenso()
{
    string mes = " ";
    string extenso[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    if (dataValida())
        mes = extenso[(this->mes - 1)];
    return mes;
}
bool Data::dataValida()
{
    bool valida = true;
    if (this->dia < 0 || this->dia > 31)
    {
        valida = false;
    }
    else if (this->mes < 0 || this->mes > 12)
    {
        valida = false;
    }
    return valida;
}
int Data::diaMes()
{
    if (mes == 2)
    {
        bool bissexto = false;
        if (ano % 400 == 0)
        {
            bissexto = true;
        }
        else if (ano % 100 != 0 && ano % 4 == 0)
        {
            bissexto = true;
        }
        if (bissexto)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    int diaPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diaPorMes[mes - 1];
}
bool Data::setDia(int d)
{
    if (d >= 1 && d <= diaMes())
    {
        dia = d;
        return true;
    }
    return false; // retorna falso caso seja menor que 0 ou maior que os dias do mes atual
}
bool Data::setMes(int n)
{
    if (m >= 1 && m <= 12)
    {
        mes = m;
        return true;
    }
    return false;
}
bool Data::setAno(int a)
{
    ano = a;
    return true; // todo ano é aceito
}
int Data::getDia()
{
    return dia;
}
int Data::getMes()
{
    return mes;
}
int Data::getAno()
{
    return ano;
}
void Data::escreveData()
{
    cout << dia << "/" << mes << "/" << ano;
}
void Data::leiaData()
{
    int d, m, a;
    cout << "dia: ";
    cin >> d;
    cout << "mes: ";
    cin >> m;
    cout << "ano: ";
    cin >> a;
    setAno(a); // vem antes para validar fevereiro
    setMes(m);
    setDia(d); // setDia pode agora usar diaMes() com ano e mes ja definidos
}
Data::dataAtual()
{
    Data d;
    time_t now = time(nullptr);
    tm *ltm = localtime(&now);
    d.setAno(1900 + ltm->tm_year);
    d.setMes(1 + ltm->tm_mon);
    d.setDia(ltm->tm_mday);
    return d; // retorna o objeto Data com a data atual
}
int Data::calculaIdade(const Data &nascimento)
{
    Data atual = dataAtual();
    int idade = atual.getAno() - nascimento.getAno();
    if (atual.getMes() < nascimento.getMes())
    {
        idade--;
    }
    else if (atual.getMes() == nascimento.getMes())
    {
        if (atual.getDia() < nascimento.getDia())
        {
            idade--;
        }
    }
    return idade;
}
Data::Data()
{
    setData();
}
Data::Data(int ano)
{
    setData(ano);
}
Data::Data(int dia, int mes, int ano)
{
    setData(dia, mes, ano);
}
bool Data::SetData(int a)
{
    dia = 0;
    mes = 0;
    ano = 0;
    return true;
}
bool Data::setData(int d, int m, int a)
{
    bool yearSet = setAno(a);
    bool monthSet = setMes(m);
    bool daySet = setDia(d);
    return monthSet && daySet && yearSet;
}
bool Data::mesIgual(int mes)
{
    bool ehIgual = false;
    if (getMes() == mes)
    {
        ehIgual = true;
    }
    return igual;
}
class Pessoa
{
private:
    string nome;
    string CPF;
    Data nascimento;
public:
    static int TAM;
    Pessoa ();
    Pessoa(string nome);
    Pessoa(string nome, int dia, int mes, int ano);
    virtual int getTipo() = 0;
    ~Pessoa();
    void setNome(string);
    string getNome();
    void setCPF(string);
    string getCPF();
    bool setNascimento(int dia, int mes, int ano);
    Data getNascimento();
    // funcao virtual = 0 -> usada para criar uma classe abstrata
    virtual void leiaPessoa() = 0;
    virtual void escrevaPessoa() = 0;
    virtual void gravar(FILE* arquivo) = 0;
    virtual void carregar(FILE* arquivo) = 0;
};
void abertura(Pessoa* pessoas[]);// inicia o sistema
void carregaPessoas(Pessoa* pessoas[]);// carrega do arquivo
void despedida(Pessoa* pessoas[]);// grava no arquivo ao encerrar
int tamanho(const char* filename);//olha o tamanho do arquivo
void gravaPessoas(Pessoa* pessoas[]);//salva no arquivo
Pessoa* criarPessoaArquivo(FILE* arquivo);
void gravaTAM();
void pesquisaPessoaNome(Pessoa* pessoas[]);
void pesquisaPessoaCPF(Pessoa* pessoas[]);
void leiaCPF();
void deletaPessoa(Pessoa* pessoas[]);
void apagarTodos(Pessoa* pessoas[]);
