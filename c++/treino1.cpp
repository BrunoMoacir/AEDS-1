CLASSES

class Data{
    private;
    int dia;
    int mes;
    int ano;
    public;
    string mesExtenso;
    bool dataValida();
    void setData(int,int,int)
};

ENCAPSULAMENTO (this e metodos set/get)
// acessamos/modificamos com metodos publicos para proteger os dados privados, geralmente usando o THIS
void data::setData(int dia,int mes,int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

PONTEIRO PARA OBJETOS
Em C, é usado malloc() para alocar memoria, em C++ É USADO O NEW:
Pessoa* p = new Pessoa();
//para acessar
p->setNome("João");

VETORES DE PONTEIROS PARA OBJETOS
// da para criar um array de ponteiros para objetos
Pessoa* pessoas[3];
pessoas[0] = new Pessoa();
pessoas[0]-> setNome("MARIA");