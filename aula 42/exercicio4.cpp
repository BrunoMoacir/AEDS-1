class Aluno{
private:
    string nome;
    string dataNascimento;
public:
    void setNome(const string& n){
        nome = n;
    }
    void set DataNascimento(const string& d){
        dataNascimento = d;
    }
    string getNome(){
        return nome;
    }
};

