CONTRUTOR = funcao especial que roda automaticamente na construcao de objetos

class Pessoa{
    private:
    int idade;
    public:
    Pessoa(int i){// <- CONSTRUTOR
        idade = i;
    }
};
NA HORA DE CRIAR:
Pessoa p(20);// o construtor é chamado automaticamente

DESTRUTOR = método executado sempre que uma instancia for destruida

