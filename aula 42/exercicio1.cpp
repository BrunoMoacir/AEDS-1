//iterativo
int main(){
    int x[6];
    srand(time(0));
    for(int i = 0; i < 6; i++){
        x[i] = rand%60 + 1;// sorteia entre 1 e 60
        cout<<"numero"<<i + 1<<":"<<x[i]<<endl;
    }
    return 0;
}
// recursiva
void sorteioMegaSena(int i, int x[]){
    if(i < 6){
        x[i] = rand%61;// NAO POSSO USAR 61, 60 + 1 diz que o intervalo é [1 , 60], 61 o intervalo ficaria [0,60]
        cout<<"numero"<<i<<":"<<x[i];
        sorteioMegaSena(i + 1, x);
    }
}
