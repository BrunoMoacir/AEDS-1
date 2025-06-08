#include <iostream>
#include <string>
#define _MAX 100

using namespace std;

class Candidato{
    private:   
    string nome;//nome candidato
    double nota;//nota do candidato

    public:
    //1. construtor: metodo chamado quando um objeto é criado
    // ele inicializa atributos
    // o construtor garante que sempre que um novo candidato for criado, ele ja nasce com um nome e uma nota
    Candidato(string nomeInicial, double notaInicial){
        nome = nomeInicial;
        nota = notaInicial;
    }
    //2. metodo get. usado para ler a atribuição privada
    string getNome(){
        return nome;
    }

    double getNota(){
        return nota;
    }
    //3. metodos set: usados para "definir(alterar)" o valor de atributo privado
    void setNome(string novoNome){
        nome = novoNome;
    }
    void setNota(double novaNota){
        nota = novaNota;
    }
    // get e set acima permitem ler dados privados de forma segura
    //funcao para ler os dados dos candidatos
    void lerCandidatos(Candidato* candidatos[],int n){
        string nome;
        double nota;
        for(int i = 0; i<n; i++){
            cout<<"Digite o nome do canditado: "<<;
            cin>>nome;
            cout<<"Digite a nota do candidato: "<<;
            cin>>nota;
            canditados[i] = new Candidato(nome,nota);
        }
    }
    // função para calcular a media
    double calcularMedia(Candidato* candidatos[],int n){
        double soma = 0;
        for(int i = 0; i < n; i++){
            soma+=candidatos[i]->getNota();
        }
        return soma/n;
    }
    // funcao para listar os candidatos acima da media
    void listaAcimaMedia(Candidato* candidatos[],int n, double media){
        cout<<"candidatos acima da media: ";
        for(int i = 0; i < n; i++){
            if(candidatos[i]->getNotas() > media){
                cout<<candidatos[i]->getNome()<<"-"<<candidatos[i]->getNota()<<endl;
            }
        }
    }
};
int main()
{
    Candidato* candidatos[_MAX];
    int n;

    lerCandidatos(candidatos,n);
    double media = calcularMedia(candidatos,n);
    listaAcimaMedia(candidatos,n,media);
    
}