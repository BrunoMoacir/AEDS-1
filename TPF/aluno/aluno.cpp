#include "aluno.h"
#include <iostream>

using namespace std;

Aluno:Aluno() : Pessoa{}
Aluno::~Aluno(){}
void Aluno::setMatricula(String m){
    matricula = m;
}
string Aluno::getMatricula() const{
    return matricula;
}
void Aluno::leiaPessoa(){
    Pessoa::leiaPessoa();
    cout<<"matricula: ";// le o nome, cpf, nascimento
    getline(cin,matricula);
}
void Aluno::escrevePessoa(){
    Pessoa::escrevePessoa();// imprime nome, cpf, nascimento
    cout<<"Matricula: "<<matricula<<endl;
}