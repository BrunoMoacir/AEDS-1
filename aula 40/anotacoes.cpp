public : o codigo inteiro possui acesso
private: os membros so podem ser acessados por outros membros da mesma classe
protected: os membros são visiveis para a própria classe e para suas DERIVADAS
exemplo:
class Animal{
    private:
    string nome;
    public:
    ...
}
class Cachorro:Animal{
    public:
    ...
}
class Gato:Animal{
    public:
    ...
}
Animal será criado com o string nome, cachorro também sera criado com o string nome e gato também.
exemplo mais pratico
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
class Cachorro:public Animal{
    public:
    Cachorro(string nome):Animal(nome)
    { }
};
class Gato:public Animal{
    public:
        Gato(string nome):Animal(nome)
        {}
};
...
Animal* animal;
animal = new Animal("bichinho");
...
Cachorro* cachorro;
cachorro = new Cachorro("rex");
...
Gato* gato;
gato = new Gato("tim");
...
cout<<animal->getNome();
cout<<cachorro->getNome();
cout<<gato-> getNome();
