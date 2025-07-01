class Aluno{
private:
    string nome;
    string dataNascimento;
public:
    void setNome(string nome){
        this->nome = nome;
    }
    string getNome(){
        return nome;
    }
    void setNascimento(string dataNascimento){
        this->dataNascimento = dataNascimento;
    }
    string getdataNascimento(){
        return dataNascimento;
    }
};
int main()
{
    Aluno alunos[3];
    alunos[0].setNome("Ana");
    alunos[1].setNome("Pedro");
    alunos[2].setNome("julia");

    int contador = 0;
    for(Aluno a : alunos){
        if(a.getNome().length()>5){
            contador++;
        }
    }
    cout<<"alunos com nome com mais de 5 letras: "<<contador<<endl;
}