#ifndef ALUNO_H
#define ALUNO_H

#include "../pessoas/pessoas.h"

class Aluno : public Pessoa
{
private:
    string matricula;

public:
    Aluno();
    virtual ~Aluno();

    void setMatricula(string)
    string getMatricula() const;

    virtual void leiaPessoa();
    virtual void escrevePessoa();
};
#endif