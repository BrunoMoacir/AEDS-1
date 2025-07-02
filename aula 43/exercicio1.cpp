class Transporte
{
public:
    virtual void mover() = 0; 
    // virtual = o metodo pode ser sobrescrito(implementado) nas classes derivadas
    // = 0, indica que o metodo nao tem implementacao na classe base, é apenas uma declaração
    // isso torna a classe Transporte uma classe abstrata, nao é possivel criar objetos diretamente nela
};
class Bicicleta : public Transporte{
    void mover();
    Bicicleta(){};
};
void Bicicleta::mover(){
    cout<<"pedalando a bicicleta"<<endl;
}
class Carro : public Transporte{
    void mover();
    Carro(){};
};
void Carro::mover(){
    cout<<"dirigindo o carro"<<endl;
}
class Aviao : public Transporte{
    void mover();
    Aviao(){};
};
void Aviao::mover(){
    cout<<"pilotando o aviao"<<endl;
}

int main()
{
    Transporte* transportes[3];
    transporte[0] = new Bicicleta();
    transporte[1] = new Aviao();
    transporte[2] = new Carro();

    for(Transporte* contador : transporte){
        contador -> mover();// chama o metodo da classe especifica
    }
}