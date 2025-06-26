class Veiculo
{
protected:
    string modelo;
    int ano;
    static int quantidade;

public:
    Veiculo()
    {
        quantidade++;
        ano = 0;
    modelo:
        "desconhecido";
    }
    Veiculo(string modelo, int ano)
    {
        this->modelo = modelo;
        this->ano = ano;
        quantidade++;
    }
    static int getQuantidade()
    {
        return quantidade;
    }
};
int Veiculo::quantidade = 0;
class Carro : public Veiculo()
{
private:
    string tracao;

public:
    Carro(string modelo, int ano, string tracao):Veiculo(modelo, ano){
        this->tracao = tracao;
    }
    Carro() : Veiculo(){
        tracao = "indefinida";
    }
    void escreve() override{
        cout<<"Carro - Modelo:"<<modelo;
        cout<<"Ano: "<<ano;
        cout<<"tracao: "<<tracao;
    }
};
class Moto: public Veiculo(){
    private:
        string cilindradas;
    public:
        Moto(string modelo, int ano, string tracao):Veiculo(modelo , ano){
        this-> cilindradas = cilindradas;    
        }
        Moto(): Veiculo(){
            cilindrada = "indefinida";
        }
        void escreve(){
            cout<<"Moto - Modelo:"<<modelo;
            cout<<"ano: "<<ano;
            cout<<"cilindradas"<<cilindradas;
        }
};
void escreve(Veiculo* veiculo){
    veiculo->escreve();
}
