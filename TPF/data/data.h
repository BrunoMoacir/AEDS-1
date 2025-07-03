#ifndef DATA_H
#define DATA_H

#include <string>

class Data {
private:
    int dia, mes, ano;

public:
    // Construtor para inicializar os dados
    Data(); 
    Data(int d, int m, int a);

    bool setData(int d, int m, int a);
    bool setDia(int d);
    bool setMes(int m);
    void setAno(int a);

    int getDia() const;
    int getMes() const;
    int getAno() const;

    std::string mesExtenso() const;
    bool dataValida() const;
    void leiaData();
    void escreveData() const;
    bool mesmoMes(int m) const;
};

// Funções utilitárias relacionadas a Data
Data obterDataAtual();
int calcularIdade(const Data& nascimento);

#endif