#include <iostream>
#include <string>
using namespace std;

const int _MAX = 100;

class Aluno
{
private:
    string nome;
    double nota;

public:
    Aluno(string nome, double nota)
    {
        this->nome = nome;
        this->nota = nota;
    }
    string getNome()
    {
        return nome;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }
    double getNota()
    {
        return nota;
    }
    void setNota(double nota)
    {
        this->nota = nota;
    }
};
int numeroAlunos()
{
    int n;
    cout << "Digite o numero de alunos: ";
    cin >> n;
    return n;
}
void criaAlunos(int n, Aluno *alunos[])
{
    string nome;
    double nota;
    for (int i = 0; i < n; i++)
    {
        cout << "Candidato: " << i + 1 << endl;
        cout << "Aluno: ";
        getline(cin, nome);
        cout << "Nota: ";
        cin >> nota;

        alunos[i] = new Aluno(nome, nota);
    }
}
float mediaNotas(int n, Aluno *alunos[])
{
    float media = 0, soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += alunos[i]->getNotas();
    }
    media = soma / n;
    return media;
}
void exibeAprovados(float media, int n, Aluno *alunos[])
{
    cout<<"Alunos aprovados:\n";
    for (int i = 0; i < n; i++)
    {
        if (alunos[i]->getNota > media)
        {
            cout << "Aluno: " << alunos[i]->getNome;
            cout << "Nota: " << alunos[i]->getNota;
        }
    }
}
int main()
{
    Aluno *alunos[_MAX];

    int n = numeroAlunos();
    if(n > _MAX){
        cout<<"Limite de alunos permitido excedito";
        return 1;
    }
    criaAlunos(n,alunos);
    float media = mediaNotas(n,alunos);
    exibeAprovados(media,n,alunos);
    
}