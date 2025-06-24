numero aleatorio em c++
int main(){
    srand(time(0));// inicializa a semente com o tempo atual
    int x = rand()%11;// limita o intervalo entre 0 e 10
    cout<<endl<<x;
    return 0
}
int main(){
    int x[10];
    srand(time(0));
    for(int i = 0; i < 10; i++){
        x[i] = rand()%101;
        cout<<x[i]<<endl;
    }
    return 0;
}
int main(){
    int x[6];
    srand(time(0));
    for(int i = 0; i < 6; i++){
        int x[i] = rand()%61;
        cout<<"numero"<<i+1<<":"<<x[i]<<endl;
    }
    return 0;
}