int main()
{
    srand(time(0));
    int x[6];
    for(int i =0; i < 6; i++){
        x[i] = rand() % 60 + 1;
        cout<<"Numero: "<<x[i]<<endl;
    }
}
// recursiva
void sorteiaMegaSena(int i){
    int x[6];
    if(i < 6){
        x[i] =rand()%60+1;
        cout<<"Numero: "<<x[i]<<endl;
        sorteiaMegaSena(i + 1);
    }
}