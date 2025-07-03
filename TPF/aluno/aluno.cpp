#include "aluno.h"
#include <iostream>

Aluno::Aluno() : Pessoa() {}
Aluno::~Aluno() {}

void Aluno::setMatricula(std::string m) { matricula = m; }
std::string Aluno::getMatricula() const { return matricula; }

void Aluno::leiaPessoa() {
    Pessoa::leiaPessoa(); // Chama o método da classe base primeiro
    std::cout << "Matricula: ";
    std::getline(std::cin, matricula);
}

void Aluno::escrevePessoa() const {
    Pessoa::escrevePessoa(); // Chama o método da classe base primeiro
    std::cout << "\nMatricula: " << matricula << std::endl;
}