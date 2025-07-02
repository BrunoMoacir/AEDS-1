class Cidade{
private:
    string nomeCidade;
    int distanciaBH;
public:
    void setNome(string nomeCidade){
        this->nomeCidade = nomeCidade;
    }
    string getNome(){
        return this->nomeCidade;
    }
    void setDistancia(int distanciaBH){
        this->distanciaBH = distanciaBH;
    }
    int getDistancia(){
        return this->distanciaBH;
    }
    bool verificaDistancia(int chave);
};
bool Cidade::verificaDistancia(int chave){
    bool menorIgual = false;
    if(getDistancia() <= chave){
        menorIgual = true;
    }
    return menorIgual;
}
void listaCidadesPerto(Cidade* cidades[], int total){
    cout<<"cidades boas para bate e volta"<<endl;
    for(int i = 0; i < total; i ++){
        if(cidades[i]->verificaDistancia(60)){
            cout<<"-"<<cidades[i].getNome();
            cout<<cidades[i]->getDistancia()<<"km";
        }
    }
}