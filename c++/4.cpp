class Pessoa{
    private:
    int idade;
    string nome;
    public:
    Pessoa();
    Pessoa(int idade,string nome);
    int getIdade();
    void setIdade(int idade);
    string getNome();
    void setNome(string nome);
};
Pessoa::Pessoa(){
    idade = 0;
    nome = " ";
}
Pessoa::Pessoa(int idade, string nome){
    this-> idade = idade;
    this-> nome = nome;
}
int Pessoa::getIdade(){
    return idade;
} 
void Pessoa::setIdade(int idade){
    this->idade = idade;
}
string Pessoa::getNome(){
    return nome;
}
void Pessoa::setNome(string nome){
    this->nome = nome;
}
int main()
{
    Pessoa p;
    Pessoa p2(24,Pedro);

    p.setNome("Bruno");
    p.setIdade(8);

    cout<<p.getNome()<<endl;
    cout<<p2.getIdade<<" "<<p2.getNome;
    return 0;
}