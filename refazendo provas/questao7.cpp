void menu(){
    cout<<"menu";
}
int main()
{
    Veiculo* veiculos[4];
    try{
        veiculos[1];
        veiculos[2];
        veiculos[3];
        veiculos[0];
    }
    catch(bad_alloc& erro){
        cout<<"Nao foi possivel alocar memoria";
        menu();
    }
}