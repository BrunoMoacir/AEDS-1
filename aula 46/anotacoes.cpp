void menu(){
    cout<<"menu:\n";
    cout<<"1 tentar novamente"<<endl;
    cout<<"2 sair do programa"<<endl;
}
int main()
{
    Veiculo* veiculo[4];
    try{
        veiculo[0] = new Carro();
        veiculo[1] = new Carro();
        veiculo[2] = new Carro();
        veiculo[3] = new Carro();
    }
    catch(bad_alloc& e){
        cout<<"erro: falha ao alocar memoria"<<endl;
        menu();
    }
}
void menu(){
    cout<<"menu\n";
    cout<<"1 - tentar novamente\n";
    cout<<"2 - encerrar o programa"
}
int main(){
    FiguraGeometrica* figuraGeometria[4];
    try{
    figutaGeometrica[1] = new Retangulo();
    figuraGeometrica[0] = new Retangulo();
    figuraGeometrica[2] = new Circulo();
    figuraGeometrica[3] = new Circulo();
    }
    catch(bad_alloc& e){
        cout<<"erro: nao foi possivel alocar memoria"<<endl;
        menu();
    }
}