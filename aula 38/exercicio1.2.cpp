#include <iostream>
#include <string>
#define _MAX 100

using namespace std;

class Candidato{
    private:
    string nome;
    double nota;

    public:
    //CONSTRUTOR
    // o que garante que sempre que um candidato for criado ele nascer com um nome e uma nota
    Candidato(string nomeInicial, double notaInicial){
        nome = nomeInicial;
        idade = idadeInicial;
    }

    string getNome(){
        return nome;
    }
    double getNota(){
        return nota;
    }
    //metodos set: usados para definir/alterar o valor de atributo privado
    void setNome(string novoNome){
        nome = novoNome;
    }
    void setNota(double novaNota){
        nota = novaNota;
    }
    //get e set sao para ler dados que estao privados de forma segura
    //funcao para ler candidatos
    void lerCandidato(Candidato* candidatos[],int n ){
        string nome;
        double nota;
        for(int i = 0; i < n; i ++){
            cout<<"Digite o nome do candidato: ";
            cin>>nome;
            cout<<"Digite a nota do candidato: ";
            cin>>nota;
            candidatos[i] = new Candidato(nome,nota);
        }
    }
    // calculo da media
    double calculoMedia(Candidato* candidatos[],int n){
        double soma = 0;
        for(int i = 0; i < n; i++){
            soma += candidatos[i]->getNota();
        }
        return soma/n;
    }
    //listar os candidatos acima media
    void listaCandidatosAcima(Candidato* candidatos[],int n, double media){
        cout<<"Candidatos acima da media";
        for(int i = 0; i < n; i++){
            if(candidatos[i]->getNota() > media){
                cout<<candidatos[i]->getNome()<<"-"<<candidatos[i]->getNota()<<endl;
            }
        }
    }
};
int main