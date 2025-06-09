class Pessoa
{
private:
    string nome;

public:
    string getNome(){
        return nome;
    }
    void setNome(string nome){
        this-> nome = nome; 
    }
};
int main()
{
    Pessoa p1;
    Pessoa p2;
    p1.setNome = {"Lucas"};
    p2.setNome = {"Pedro"};

    cout << p1.getNome << endl;
    cout << p2.getNome<< endl;
}