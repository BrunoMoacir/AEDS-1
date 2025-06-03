#include <iostream>

using namespace std;

class Quadrado{
    private:
    float lado;
    
    public:
        float setLado(float lado){
            if (lado >=0){
                this-> lado = lado;
            }else{
                cout<<"Valor invalido."<<endl;
            }
        }
        float getLado(){
            return lado;
        }
        void leiaLado(){
            float valor;
            cout<<endl<<"Lado: ";
            cin>>valor;
            setLado(valor);
        }
        void escreveLado(){
            cout<<endl<<"Lado: "<<lado<<endl;
        }
        float calculaPerimetro(){
            return lado * 4;
        }
        float calculaArea(){
            return lado * lado;
        }
};
int main()
{
    Quadrado q;
    q.leiaLado;
    q.escreveLado;
    cout<<"O perimetro vale: "<<q.calculaPerimetro()<<endl;
    cout<<'A area vale: '<<q.calculaArea()<<endl;
    return 0;
}