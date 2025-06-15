#ifdef PESSOAS_H
#define PESSOAS_H

#include "...data/data.h"
#include <iostream>
#include <string>

using namespace std;
#define MAX 100
extern int TAM;
class Pessoa{
    private:
        string nome;
        string CPF;
        Data nascimento;
    public:
        void setNome(string);
        string getNome();
        void setCPF(string);
        string getCPF();
        bool setNascimento(int dia,int mes,int ano);
        Data getNascimento();
        void leiaNome();
        void escrevaNome();
        void leiaPessoa();
        void escrevePessoa();
};
void abertura(Pessoa pessoas[]);
void carregaPessoas(Pessoa pessoas[]);
void despedida(Pessoa pessoas[]); 

int tamanho(char* arq);
void gravaPessoas(Pessoa pessoas[]);

void pesquisaNome(Pessoa pessoas[]);
void pesquisaCPF(Pessoa pessoas[]);

void cadastraPessoa(Pessoa pessoas[]);
void leiaCPF(char cpf[]);
bool deletaPessoa(Pessoa pessoas[]);
void apagarTodos(Pessoa pessoas[]);

#endif