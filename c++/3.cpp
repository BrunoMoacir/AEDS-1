class Retangulo{
private:
    int altura;
    int largura;
public:
    void setValores(int altura,int largura);
    int area();
    Retangulo();
    Retangulo(int altura, int largura);
    ~Retangulo();
    static int angulo;
};
int Retangulo::angulo = 90;
void Retangulo::setValores(int altura, int largura){
    this->altura = altura;
    this->largura = largura;
}
int Retangulo::area(){
    return largura * altura;
}
Retangulo::Retangulo(){
    this->altura = 1;
    this->largura = 1;
}
Retangulo::Retangulo(int altura, int largura){
    this->altura = altura;
    this->largura = largura;
}
Retangulo::~Retangulo(){
    cout<<"objeto destruido"<<endl;
}
int main(){
    Retangulo r;
    Retangulo r2;
    int area = r.area();
    int area2 = r2.area();
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Area: "<<r2.area()<<endl;
    return 0;
}