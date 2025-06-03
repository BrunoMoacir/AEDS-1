#include <iostream>

using namespace;

class Pessoa{
    private:
    string nome;
    int idade;
    public:
    void setNome(string nome){
        this->nome = nome;
    }
    void setIdade(string nome){
        this->idade = idade;
    }
    void escrevePessoa(){
        cout<<endl<<"nome "<<nome;
        cout<<end<<"idade"<<idade;
    }
    void leiaPessoa(){
        leiaNome();
        leiaPessoa();
    }
    void leiaNome(){
        string nome;
        cout<<"nome ";
        cin>>nome;
        setNome(nome);// chama o metodo "setIdade" para atribuir a idade lida ao atributo
    }
    void leiaIdade(){
        int idade;
        cout<<"idade: ";
        cin>>idade;
        setIdade(idade);
    }
};
int main()
{
    Pessoa p[3];
    p[0].setNome("Pedro");
    p[0].setIdade(18);

    p[1].setNome ("Bruno");
    p[1].setIdade(19);

    p.[2].leiaPessoa();
    for(int i = 0; i < 3; i++){
        p[i].escrevePessoa();
    }
}