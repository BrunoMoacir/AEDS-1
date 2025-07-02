// veiculo se especializa em carro e moto;
// comuns de carro e moto: string modelo, int anodefabricacao;
// quando um veiculo se especializa em carro, se acrescenta um atributo string tracao
// quando se especializa em moto, se acrescenta int cilindradas
// letra a: classe veiculp 
class Veiculo{
private:
    string modelo;
    int anoFabricacao;
public:
    static int quantidade;
    Veiculo(){
        ano = 0;
        modelo = "desconhecido";
        quantidade ++;
    }
    Veiculo(string modelo, int anoFabricacao){
        this->modelo = modelo;
        this->anoFabricacao = anoFabricacao;
        quantidade ++;
    }
    virtual void escreve() = 0;//metodo virtual
    virtual ~Veiculo(){}//destrutor virtual
};
int Veiculo::quantidade = 0;
// letra b: class carro
class Carro : public Veiculo{
private:
    string tracao;
public:
    Carro() : Veiculo(){
        tracao = "indefinida";
    }
    Carro(string tracao, string modelo, int anoFabricacao) : Veiculo(modelo,ano){
        this->tracao = tracao;
    }
    virtual escreve(){
        cout<<"carro- modelo: "<<modelo<<"ano: "<<ano<<"tracao: "<<tracao<<endl;
    }
};
class Moto : public Veiculo{
private:
    int cilindradas;
public:
    Moto() : Veiculo(){
        cilindradas = "0";
    }
    Moto(string cilindradas, string modelo, int anoFabricacao):Veiculo(modelo , anoFabricacao){
        this->cilindradas = cilindradas;
    }
    virtual void escreve(){
        cout<<"Moto- modelo:"<<modelo<<"ano: "<<anoFabricacao<<"cilindradas:"<<cilindradas<<endl;
    }
};