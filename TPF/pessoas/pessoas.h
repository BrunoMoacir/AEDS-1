#ifndef PESSOAS_H
#define PESSOAS_H

#include "data.h"
#include <iostream>
#include <string>

#define MAX 100 // Define o tamanho máximo do array de pessoas

class Pessoa {
protected:
    std::string nome;
    std::string cpf;
    Data nascimento;
    static int contador;

public:
    Pessoa();
    virtual ~Pessoa(); // Destrutor virtual é crucial!
    static int getContador();

    void setNome(std::string n);
    std::string getNome() const;

    bool setCPF(std::string c);
    std::string getCPF() const;

    bool setNascimento(int dia, int mes, int ano);
    Data getNascimento() const;

    // Métodos virtuais puros forçam as classes filhas a implementá-los
    virtual void leiaPessoa();
    virtual void escrevePessoa() const;
};

// Funções de gerenciamento do sistema
void abertura(Pessoa *pessoas[]);
void despedida(Pessoa *pessoas[]);
void gravaPessoas(Pessoa *pessoas[]);
void carregaPessoas(Pessoa *pessoas[]);

// Funções dos submenus
void submenuCadastro(Pessoa *pessoas[]);
void submenuListagem(Pessoa *pessoas[]);
void submenuPesquisaNome(Pessoa *pessoas[]);
void submenuPesquisaCPF(Pessoa *pessoas[]);
void submenuExcluir(Pessoa *pessoas[]);
void submenuApagarTodos(Pessoa *pessoas[]);
void aniversariantesMes(Pessoa *pessoas[]);

#endif
