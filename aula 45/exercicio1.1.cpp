// letra a

bool Pessoa::ehMaior(){
    bool maior = false;
    if(getIdade() >= 18){
        bool maior = true;
    }
    return maior;
}
// letra b
class Aluno : public Pessoa{
private:
    int matricula;
public:
    Aluno(){};
    Aluno(int matricula, string nome, int idade){
        this->matricula = matricula;
        setNome(nome);
        setIdade(idade);//ambos set herdados de pessoa
    }
    void setMatricula(int matricula){
        this->matricula = matricula;
    }
    int getMatricula(){
        return matricula;
    }
};
// letra C
Pessoa* maisVelho(Pessoa* pessoa){
    Pessoa* velho = pessoa;
    if(this->getIdade() > pessoa->getIdade()){
        velho = this;// atualiza o ponteiro
    }
    return velho;
}