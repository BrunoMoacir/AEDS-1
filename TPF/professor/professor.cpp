#include "professor.h"
#include <iostream>

Professor::Professor() : Pessoa() {}
Professor::~Professor() {}

void Professor::setArea(std::string a) { area = a; }
std::string Professor::getArea() const { return area; }

void Professor::leiaPessoa()
{
    Pessoa::leiaPessoa(); // Chama o método da classe base primeiro
    std::cout << "Area de atuacao: ";
    std::getline(std::cin, area);
}

void Professor::escrevePessoa() const
{
    Pessoa::escrevePessoa(); // Chama o método da classe base primeiro
    std::cout << "\nArea de atuacao: " << area << std::endl;
}