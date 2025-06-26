// implementar o metodo ehMaior():booleano, ele deve descrever uma operacao que verifique se uma pessoa é maior de idade ou nao
bool Pessoa::ehMaior(){
    bool maiorDeIdade = false;
    if(idade >= 18){
        maiorDeIdade = true;
    }
    return maiorDeIdade;
}
class Aluno: public Pessoa{
protected:
    int numeroMatricula;
public:
    Aluno(int numeroMatricula, string nome, int idade):Pessoa(nome,idade){// dessa forma eu chamo os construtores da classe Pessoa
        this->numeroMatricula = numeroMatricula;
    }
    int getMatricula(){
        return numeroMatricula;
    }
};
