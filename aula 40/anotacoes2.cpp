private: so a classe pode acessar
protected: a classe a suas derivadas podem acessar
public: todos podem acessar(fora da classe também)

class Animal{
    private:
        string nome;
    public:
        Animal(string nome){
            this->nome = nome;
        }
        string getNome(){
            return nome;
        }
};
class Gato : public Animal{
    public:
    // construtor repassa o nome para o construtor de Animal
    Gato(string nome): Animal(nome){ }
};
class Cachorro: public Animal(nome){
    public:
        Cachorro(string nome): Animal(nome);
};

int main()
{
    Animal* animal = new Animal("bicho");
    Cachorro* cachorro = new Cachorro("cachorro");
    Gato* gato = new Gato("gato");

    cout<<"Animal: "<<animal->getNome()<<endl;
    cout<<"Cachorro: "<<cachorro->getNome()<<endl;
    cout<<"Gato "<<gato->getNome()<<endl;
}