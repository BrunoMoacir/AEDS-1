class Quadrado
{
    private:
        float lado;
    public:
        void setLado (float lado){
            if(lado >=0){
                this->lado = lado;
            }
        }
        float getLado(){
            return lado;
        }
        float perimetro(){
            return 4 * lado;
        }
        float area(){
            return lado * lado;
        }
        void leiaLado(){
            float lado;
            cout<<"lado: ";
            cim>>lado;
            setLado(lado);
        }
        void escreveLado(){
            cout<<"lado: "<<lado;
        }
}
int MAX = 3;
int main()
{
    Quadrado q[MAX];
    for(int i = 0; i < MAX;i++){
        q[i].leiaLado;
    }
    for(int j = 0; j < MAX; j++){
        Q[i].escrevaLado();
        cout<<"perimetro = "<<Q[i].perimetro;
        cout<<"area = "<<Q[i].area;
    }
    return 0;
}