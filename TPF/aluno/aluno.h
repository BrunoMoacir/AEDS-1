#ifndef ALUNO_H
#define ALUNO_H
#include "pessoas.h"

class Aluno : public Pessoa {
private:
    std::string matricula;

public:
    Aluno();
    virtual ~Aluno();

    void setMatricula(std::string m); // faltava o tipo do parâmetro
    std::string getMatricula() const;

    // Sobrescrita (override) dos métodos da classe base
    virtual void leiaPessoa() override;
    virtual void escrevePessoa() const override;
};
#endif