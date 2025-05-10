#include <stdio.h>
#include <stdlib.h>


// vetor de trás para frente
int main()
{
    int i;
    float vet [4], soma = 0;
    for (int i = 0; i < 4; i++){
        scanf("%f", &vet[i]);
        soma = soma + vet[i];
    }
    for (int i = 4-1; i >=0; i--){
        printf("%1.f\n", vet[i]);
    }
        printf("%2.f", soma);
}
