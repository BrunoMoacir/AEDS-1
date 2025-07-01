#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

class Data{
private:
    int dia;
    int mes;
    int ano;
public:
    int diasMes() const;
    bool setData(int dia,int mes,int ano);
    Data getData();

    bool setDia(int dia);
    bool setMes(int mes);
    void setAno(int ano);

    int getDia() const;// const para garantir que nao sera modificado, ela apenas irá ler
    int getMes() const;// const protege de modificacoes acidentais
    int getAno() const;

    std::string mesExtenso();
    bool dataValida();
    void leiaData();
    void escreveData() const;
};
Data obterDataAtual();
int calcularIdade(const Data &nascimento);// &significa que estou passando o parametro por referencia e nao por copia
// & acessa diretamente o objeto original
#endif