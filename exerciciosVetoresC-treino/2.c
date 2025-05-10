// vetor de trás para frente
int main()
{
    int i;
    float vet [4];
    for (int i = 0; i < 4; i++){
        scanf("%f", &vet[i]);
    }
    for (int i = 4-1; i >=0; i--){
        printf("%f", vet[i]);
    }
}