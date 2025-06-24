class Transporte{
public:
    virtual void mover() = 0;
    // virtual = o metodo pode ser sobrescrito(implementado) nas classes derivadas
    // = 0, indica que o metodo nao tem implementacao na classe base, é apenas uma declaração
    // isso torna a classe Transporte uma classe abstrata, nao é possivel criar objetos diretamente nela
};
class Bicicleta : public Transporte{
    public:
        void mover();
        Bicicleta(){};
};
void Bicicleta::mover(){
    cout<<"pedalando a bicicleta";
}
class Aviao: public Transporte{
    public:
        void mover();
        Aviao(){};
};
void Aviao::mover(){
    cout<<"pilotando o aviao";
}
class Carro : public Transporte{
    public:
    mover();
    Carro(){};
};
void Carro::mover(){
    cout<<"dirigindo o carro";
}
int main(){
    Transporte* transporte[3];
    transporte[0] = new Aviao();
    transporte[1] = new Carro();
    transporte[2] = new Bicicleta();
    for(Transporte *contador : transporte){
        contador->mover();// vai chamar o metodo mover da classe esperifica
    }
}