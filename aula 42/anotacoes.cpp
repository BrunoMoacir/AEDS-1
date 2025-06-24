for comum:
for(int i = 0; i < n; i ++){
    cout<<vetor[i]<<endl;
}
// é usado quando preciso do indice ou quero controlar o inicio, fim e acessar elementos com base na posicao
for-each
//percorre todos os elementos de uma coleção sem usar índices
for( int valor:vetor){
    cout<<valor<<endl;
}
// lê se como: para cada valor em vetor
// mais limpo e legivel, especialmente para leitura de elementos
// desvantagem: nao da acesso direto ao indice
comparação pratica: 
int v [] = {10,20,30,40};
for(int i = 0; i < 4; i++){
    cout<<v[i]<<endl;
}
com for-each
for(int x:v){
    cout<<x<<endl;
}
ambos irao imprimir 10,20,30,40
string nome[] = {"lucas","gabriel","pedro","ana"};
for(string x : nome){
    cout<<x<<endl;
}
mais exemplos:
class Aluno{
private:
    string nome;
public:
    Aluno(){};
    Aluno(string nome){
        setNome(nome);
    }
    string getNome(){
        return this-> nome;
    }
    void setNome(string nome){
        this->nome = nome;
    }
};
int main(){
    Aluno* array[3];
    array[0] = new Aluno("Lucas");
    array[1] = new Aluno("Pedro");
    array[2] = new Aluno("Joao");
    for(Aluno* aluno : array){// declaro a variavel aluno dentro do proprio for
        cout<<aluno->getNome()<<endl;        
    }
    return 0;
