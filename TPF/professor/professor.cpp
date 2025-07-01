#include "professor.h"
#include <iostream>

using namespace std;

Professor::Professor() : Pessoa(){}
Professor::~Professor(){}

void Professor::setArea(string a){
    area = a;
}
void Professor::leiaPessoa(){
    Pessoa::leiaPessoa();// le nome, cpf, nascimento
    cout<<"Area de atuacao: ";
    getline(cin,area);
}
void Professor::escrevePessoa(){
    Pessoa::escrevePessoa();// imprime nome,cpf, nascimento
    cout<<"area de atuacao: "<<area<<endl;
}