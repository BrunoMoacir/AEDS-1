// manipulando um ponteiro para objeto

Pessoa *PESSOA = new Pessoa();

Pessoa->nome = "Pedro";   // se o nome for publico
Pessoa->setNome("Pedro"); // se o nome for privado e setNome()público

CONTANDO OBJETOS COM CONSTRUTOR E DESTRUTOR

    int TAM = 0;

class Pessoa
{
private:
    string nome;
    Data nascimento;

public:
    Pessoa()
    {
        TAM++;
    }
    ~Pessoa()
    {
        TAM--;
    }
}

PROPRIEDADE ESTATICA class Qualquer
{
private:
    int A;
    int B;
    static int C; // é a mesma para todos os objetos
public:
};
Qualquer *Q1, Q2, Q3;
Q1 = new Qualquer;
Q2 = new Qualquer;
Q3 = new Qualquer;
int Qualquer::C = 0;

EXEMPLO DE USO PARA QUANTIFICAR O N° DE INSTANCIAS CRIADAS

    int TAM = 0;
class Pessoa
{
private:
    string nome;
    Data nascimento;

public:
    Pessoa()
    {
        TAM++;
    }
    ~Pessoa()
    {
        TAM--;
    }
};

class Pessoa
{
private:
    string nome;
    Data nascimento;

public:
    static int TAM;
    Pessoa()
    {
        TAM++;
    }
    ~Pessoa()
    {
        TAM--;
    }
};
int Pessoa::TAM = 0;
