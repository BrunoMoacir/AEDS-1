#include "data.h"
#include <iostream>
#include <ctime> // Para obter a data atual

// Construtor padrão
Data::Data() : dia(1), mes(1), ano(1900) {}

// Construtor com parâmetros
Data::Data(int d, int m, int a) {
    setData(d, m, a);
}

bool Data::setData(int d, int m, int a) {
    setAno(a); // Ano pode ser qualquer um
    if (setMes(m) && setDia(d)) {
        // Validação simples, poderia ser melhorada para checar dias do mês
        return dataValida();
    }
    return false;
}

bool Data::setDia(int d) {
    // Validação básica. Uma validação completa checaria o mês e ano bissexto.
    if (d >= 1 && d <= 31) { 
        dia = d; 
        return true; 
    }
    return false;
}

bool Data::setMes(int m) {
    if (m >= 1 && m <= 12) { 
        mes = m; 
        return true; 
    }
    return false;
}

void Data::setAno(int a) { ano = a; }

int Data::getDia() const { return dia; }
int Data::getMes() const { return mes; }
int Data::getAno() const { return ano; }

void Data::leiaData() {
    int d, m, a;
    do {
        std::cout << "Dia: "; std::cin >> d;
        std::cout << "Mes: "; std::cin >> m;
        std::cout << "Ano: "; std::cin >> a;
        if (!setData(d, m, a)) {
            std::cout << "Data invalida! Tente novamente.\n";
        }
    } while (!dataValida());
    std::cin.ignore(); // Limpa o buffer
}

void Data::escreveData() const {
    std::cout << dia << "/" << mes << "/" << ano;
}

bool Data::mesmoMes(int m) const { return mes == m; }

std::string Data::mesExtenso() const {
    const std::string meses[] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    if (dataValida()) {
        return meses[mes - 1];
    }
    return "Mes Invalido";
}

bool Data::dataValida() const {
    // Validação simples
    if (dia < 1 || mes < 1 || mes > 12) return false;
    if (mes == 2) {
        // Ignorando anos bissextos para simplificar
        return dia <= 29;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return dia <= 30;
    }
    return dia <= 31;
}

Data obterDataAtual() {
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    Data dataAtual;
    dataAtual.setAno(1900 + now->tm_year);
    dataAtual.setMes(1 + now->tm_mon);
    dataAtual.setDia(now->tm_mday);
    return dataAtual;
}

int calcularIdade(const Data& nascimento) {
    Data atual = obterDataAtual();
    int idade = atual.getAno() - nascimento.getAno();
    if (atual.getMes() < nascimento.getMes() ||
       (atual.getMes() == nascimento.getMes() && atual.getDia() < nascimento.getDia())) {
        idade--;
    }
    return idade;
}