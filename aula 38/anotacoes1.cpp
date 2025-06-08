#include <iostream>
#include <string>
using namespace std;

class Data{
    private:
    int dia;
    int mes;
    int ano;

    public:
    string mesExtenso();
    bool dataValida();
    void setData(int,int,int);
};
string Data::mesExtenso(){
    string mes =" ";
    string extenso[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    if(dataValida ())mes = extenso[(this->mes-1)];
    return mes;
}
bool Data::dataValida(){
    bool valida = true;
    if(this->dia<0 || this->dia>31)valida = false;
    else{
        if(this->mes < 0 || this->mes > 12)valida = false;
    }
    return valida;
}
void Data::setData(int dia,int mes,int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
class Pessoa{
    private:
    string nome;
    Data nascimento;
    public:
    void setNome(string nome);
    string getNome();
    bool setNascimento(int dia,int mes,int ano);
    Data getNascimento();
    void lePessoa();
    void escrevePessoa();
};
void Pessoa::setNome(string nome){
    this->nome = nome;
}
bool Pessoa::setNascimento(int dia,int mes,int ano){
    return this->nascimento;
}
void Pessoa::lePessoa(){
    string nome;
    cout<<"Nome: \n";
    cin<<nome;
    setNome(nome);
    cout<<"Data de nascimento: ";
    this->nascimento.leData();
}
void Pessoa::escrevePessoa(){
    cout<<"Nome: "<<getNome();
    cout<<"Data de nascimento: ";
    nascimento.escreveData();
}
void Data::leData(){
    scanf("%i/%i/%i", &dia,&mes,&ano);
}
void Data::escreveData(){
    printf("%i,%i,%i",dia,mes,ano);
}
int main()
{
    cout<<"\nTestando classes e objetos: ";
    Data data1;
    data1.setData(4,13,2025);
    cout<<"\n Mes atual :"<<data1.mesExtenso();
    Pessoa* PESSOA[3];
    PESSOA[0] = new Pessoa();
    PESSOA[1] = new Pessoa();
    PESSOA[3] = new Pessoa();

    PESSOA[0] -> setNome("Pedro");
    PESSOA[1] -> setNome("Arthur");
    PESSOA[3] -> setNome("Ana");
}