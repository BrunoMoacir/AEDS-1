EXEMPLO DE ATRIBUTO ESTATICO PARA CONTAGEM

class Pessoa{
    private:
        string nome;
        Data nascimento;
    public:
        static int TAM;
        Pessoa(){
            TAM++;
        }
        Pessoa(){
            TAM--;
        }
};
int Pessoas::TAM = 0;
Pessoa* P1,P2,P3;
P1 = new Pessoa;
P2 = new Pessoa;
P3 = new Pessoa;
cout<<Pessoa::TAM;

delete P2;
cout<<Pessoa::TAM;

class Cachorro{
    private:
        string nome;
    public:
        static int quantidade;

        Cachorro(){
            nome =" ";
            quantidade ++;
        }
        Cachorro(string n){
            nome = n;
            quantidade ++;
        }
        void fala(){
            cout<<nome<<"au"<<endl;
        }
};
int Cachorro::quantidade = 0;

int main()
{
    cout<<"quantidade de cachorros: "<<Cachorro::quatidade<<endl;

    Cachorro c1;
    c1.fala();

    Cachorro c2("Rex");
    c2.fala();

    Cachorro c3("luna");
    c3.fala();

    cout<<"quantidade de cachorros"<<Cachorro::quantidade<<endl;

    return 0;
}