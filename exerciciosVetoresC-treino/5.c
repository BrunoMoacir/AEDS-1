// media dos vetores

int main()
{
    int i;
    float vet [4], soma = 0, media = 0;
    for (int i = 0; i < 4; i++){
        scanf("%f", &vet[i]);
        soma = soma + vet[i];
        media ++;
    }
    for (int i = 4-1; i >=0; i--){
        printf("%1.f\n", vet[i]);
    }
        printf("\n A soma dos vetores eh: %2.f", soma);
        printf("\n A media dos vetores eh: %1.f", (soma / media));
}