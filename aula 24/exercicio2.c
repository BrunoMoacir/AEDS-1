// versao iterativa

void quantNegativos (int M[]){
    int negativos = 0;
    for(int i = 0; i < 5;i ++){
        if (M[i] < 0){
            negativos++;
        }
    }
    printf("\nA quantidade de numeros negativos eh %i", negativos);
}
int main ()
{
    int M[5]={1,2,-1,-2,3};
    quantNegativos(M);
}