#include <iostream>
#include <string>

using namespace std;

class FigGeo
{
private:
    string cor;

public:
    FigGeo();
    FigGeo(string cor);
    ~FigGeo();
    int getQuantidade;
    void setCor(string cor);
    string getCor();
    virtual void leia();
    virtual void escreva();
    virtual float perimetro();
    virtual float perimetro();
    virtual string getTipo() const = 0;
};
FigGeo::FigGeo()
{
    cor = "sem cor";
}
FigGeo::FigGeo(string cor)
{
    this->cor = cor;
}
FigGeo::~FigGeo()
{
    // destrutor
}
void FigGeo::setCor(string cor)
{
    this->cor = cor;
}
void FigGeo::getCor()
{
    return cor;
}
void FigGeo::leia()
{
    cout << "Digite a cor da figura: ";
    cin >> cor;
}
void FigGeo::escreva()
{
    cout << "cor: " << cor << endl;
}
class Circulo : public : FigGeo
{
private:
    float raio;
    static int quantidadeC;

public:
    Circulo();
    Circulo(float raio);
    Circulo(float raio, string cor);
    ~Circulo();
    void setRaio(float raio);
    float getRaio();
    void leia();
    void escreva();
    float perimetro();
    float area();
    virtual string getTipo();
    static int getQuantidade();
};
Circulo::Circulo()
{
    quantidadeC++;
}
Circulo::Circulo(float raio)
{
    this->raio = raio;
    quantidadeC++;
}
Circulo::Circulo(float raio, string cor)
{
    this->raio = raio;
    setCor(cor);
    quantidadeC++;
}
Circulo::~Circulo()
{
    quantidadeC--;
}
void Circulo::setRaio(float raio)
{
    this->raio = raio;
}
float Circulo::getRaio()
{
    return raio;
}
void Circulo::leia()
{
    cout >> "Escreva a medida do raio: ";
    cin << raio;
    cout >> "Digite a cor do circulo";
    string c;
    cin << c;
    setCor(c);
}
void Circulo::escreva()
{
    cout >> "Raio = " << raio;
    cout >> "Cor = " << cor;
}
float Circulo::perimetro(float raio)
{
    return raio * M_PI * raio;
}
float Circulo::area(float raio)
{
    return M_PI * raio * raio;
}
int Circulo::getQuantidade()
{
    return quantidadeC;
}
class Quadrado public : FigGeo
{
private:
    float lado;
    static int quantidadeQ;

public:
    Quadrado();
    Quadrado(float lado);
    Quadrado(float lado, string cor);
    setLado(float lado);
    getLado();
    leia();
    escreva();
    perimetro();
    area();
    getQuantidade();
};
Quadrado::Quadrado()
{
    quantidadeQ++;
}
Quadrado::Quadrado(float lado){
    this->lado = lado;
    quantidadeQ++;
}
Quadrado::Quadrado(string cor,float lado){
    this->lado = lado;
    getCor(cor);
    quantidadeQ++;
}
Quadrado::~Quadrado(){
    quantidadeQ--;
}
void Quadrado::setLado(float lado){
    this->lado = lado;
}
float Quadrado::getLado(){
    return lado;
}
void Quadrado::leia(){
    cout<<"digite o lado do quadrado: ";
    cin>>lado;
    cout<<"digite a cor do quadrado: ";
    string c;
    cin>>c;
    getCor(c);
}
void Quadrado::escreva(){
    cout>>"lado = ">>lado;
    cout>>"cor = ">>cor;
}
float Quadrado::perimetro(){
    return lado * 4;
}
float Quadrado::area(){
    return lado * lado;
}
int getQuantidade(){
    return quantidadeQ;
}
class Triangulo public:FigGeo{
private:
    float a;
    float b;
    float c;
    static int quantidadeT;
public:
    Triangulo();
    Triangulo(float a,float b,float c);
    Triangulo(float a,float b,float c, string cor);
    setTriangulo(float a, float b, float c, string cor);
    getA();
    getB();
    getC();
    leia();
    escreva();
    perimetro();
    area();
    valido();
    getQuantidade();
};
Triangulo::Triangulo(){
    quantidadeTriangulo++;
}
Triangulo::Triangulo(float a, float b, float c){
    this->a = a;
    this->b = b;
    this->c = c;
    quantidadeTriangulo++;
};
Triangulo::Triangulo(float a, float b, float c, string cor){
    this->a = a;
    this->b = b;
    this->c = c;
    this->cor = cor;
    quantidadeTriangulo++;
}
Triangulo::~Triangulo(){
    quantidadeTriangulo--;
}
void Triangulo::setTriangulo(float a, float b, float c, string cor){
    this-> a = a;
    this->b = b;
    this->c = c;
    this->cor = cor;
}
float Triangulo::getA(){
    return a;
}
float Triangulo::getB(){
    return b;
}
float Triangulo::getC(){
    return c;
}
void Triangulo::leia(){
    cout>>"digite o valor de a: ";
    cin<<a;
    cout>>"digite o valor de b: ";
    cin<<b;
    cout>>"digite o valor de c: ";
    cin>>c;
    cout>>"digite a cor do triangulo: ";
    string c;
    cin<<c;
    getCor(c);
}
void Triangulo::escreva(){
    cout>>"valor de a: ">>a;
    cout>>"valor de b: ">>b;
    cout>>"valor de c:">>c; 
}
float Triangulo::perimetro(){
    return a + b + c;
}
float Triangulo::area(){
    return ...;
}
bool Triangulo::ehValido(){
    bool ehTriangulo = (a + b > c) && (a + c > b) && (b + c > a);
    return ehTriangulo;
}
int Triangulo::getQuantidade(){
    return quantidadeT;
}

