class Veiculo
{
private:
    string modelo;
    int ano;

public:
    Veiculo()
    {
        modelo = "desconhecido";
        ano = 0;
    }
    Veiculo(string modelo, int ano)
    {
        this->modelo = modelo;
        this->ano = ano;
    }
    virtual ~Veiculo() {}
    virtual void escreve() = 0;
};
class Carro : public Veiculo
{
private:
    string tracao;
public:
    Carro() : Veiculo(){
        tracao = "desconhecida";
    }
    Carro (string modelo, int ano, string tracao) : Veiculo (modelo, ano){
        this->tracao = tracao;
    }
    virtual escreve(){
        cout<<"carro - modelo:"<<modelo<<"ano"<<ano<<"tracao"<<tracao<<endl;
    }
};
class Moto : public Veiculo
{
private:
    int cilindradas;
public:
    Moto() : Veiculo(){
        cilindradas = 0;
    }
    Moto(string modelo, int ano, int cilindradas) : Veiculo(modelo, ano){
        this-> cilindradas = cilindradas;
    }
    virtual escreve(){
        cout<<"moto - modelo:"<<modelo<<"ano: "ano<<"cilindradas"<<cilindradas<<endl;
    }
}
