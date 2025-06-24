int main(){
    string acoes[] = {"brincar","dançar","jogar","trabalhar","estudar","cantar"};
    srand(time(0));
    int dado = rand() % 6 + 1;
    cout<<"dado lançado!"<<"Numero sorteado: "<<dado<<endl;
    cout<<"Ação sorteada:"<<acoes[dado - 1]<<endl;
}