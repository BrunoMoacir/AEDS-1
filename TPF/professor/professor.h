#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "../pessoas/pessoas.h"

class Professor : public Pessoa{
private:
    string area;
public:
    Professor();
    virtual ~Professor();

    void setArea(string);
    string getArea() const;// const para nao alterar nada

    virtual void leiaPessoa();
    virtual void escrevePessoa();
};
#endif
