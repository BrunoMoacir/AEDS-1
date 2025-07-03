#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "pessoas.h"

class Professor : public Pessoa {
private:
    std::string area;

public:
    Professor();
    virtual ~Professor();

    void setArea(std::string a);
    std::string getArea() const;

    // Sobrescrita (override) dos métodos da classe base
    virtual void leiaPessoa() override;
    virtual void escrevePessoa() const override;
};

#endif