#define _MAX 100
class Candidato
{
private:
    string nome;
    double nota;

public:
    Candidato(string nome, double nota)
    {
        this->nome = nome;
        this->nota = nota;
    }
    void setNota(double nota)
    {
        this->nota = nota;
    }
    void setNome(string nome)
    {
        this->nome = nome;
    }
    string getNome()
    {
        return nome;
    }
    double getNota()
    {
        return nota;
    }
};
int lerNumero()
{
    int n;
    cout << "Digite a quantidade de candidatos";
    cin << n;
    return n;
}
void criaCandidato(int n, Candidato *candidatos[])
{
    string nome;
    double nota;
    for(int i = 0; i < n; i++){
        cout<<"Candidato: "<<i+1<<"\n";
        cout<<"Nome";
        fflush(stdin);
        getline(cin,nome);

        cout<<"nota: ";
        cin>>nota;

        candidatos[i] = new Candidato(nome,nota);
    }
}
float calculaMedia(int n, Candidato* candidatos[]){
    float soma = 0,media = 0;
    for(int i = 0; i < n; i++){
        soma += candidatos[i]->getNota();// se utiliza seta por conta do ponteiro para o objeto
    }
    media = soma / n;
    return media;
}
void listaAcima(int n, Candidato* candidatos[]){
    for(int i = 0; i < n; i++){
        if(candidato[i]->getNota() > media ){
            cout<<"Candidato: "<<candidato[i]->getNome();
            cout<<"Nota: "<<candidato[i]->getNota();
        }
    }
}
int main()
{
    Candidato *candidatos[MAX];
}