#define MAX 100
class Candidato{
private:
    string nome;
    double nota;
public:
    Candidato(string nome, double nota){ //CONSTRUTOR
        this->nome = nome;
        this->nota = nota
    }
    // metodos para acessar e modificar os dados de forma segura
    string getNome(){
        return nome;
    }
    double getNota(){
        return nota;
    }
    void setNome(string nome){
        this->nome = nome;
    }
    void setNota(double nota){
        this->nota = nota;
    }
};
int quantidadeCandidatos(){
    int n;
    do{
        cout<<"Digite o numero de candidatos:";
        cin>>n;
    }while(n<1 || n > MAX);
    return n;
}
void criarCandidatos(int n,Candidato* candidatos[]){// construtora
    for(int i = 0; i < n; i++){
        string nome;
        double nota;
        cout<<"nome: ";
        getline(cin,nome);
        cout<<"nota:";
        cin>>nota;
        // aloca memoria para um novo Candidato e guarda seu endereço no vetor 
        candidatos [i] = new Candidato(nome,nota); 
    }
}// a funcao cria um novo candidato na memoria com o new e armazena o ponteiro para ele no seu vetor
double media(int n, Candidato* candidatos[]){
    double soma = 0;
    for(int i = 0; i < n; i++){
        soma += candidatos[i]->getNota();// usa -> para acessar via PONTEIRO
    }
    return soma / n;
}
void listaAcimaMedia(int n, Candidato* candidato[], double media){
    cout<<"Candidatos acima da media: ";
    for(int i = 0; i < n; i ++){
        if(candidatos[i]->getNota() > media){
            cout<<candidatos[i]->getNome()<<"-"<<candidatos[i]->getNota();
    }
}
int main(){
    Candidato* candidatos[MAX];
    int n = qtCandidatos();
    criarCandidatos(n,candidatos);
    double media = notaMedia(n , candidatos);
    listasAcimadaMedia(n,candidatos,media);
    for(int i = 0; i<n;i++){
        delete candidatos[i];
    }
    return 0;
}