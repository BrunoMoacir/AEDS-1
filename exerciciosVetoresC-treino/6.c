#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[4], soma = 0, media = 0, maior, menor;
    
    for (int i = 0; i < 4; i++){
        scanf("%f", &vet[i]);
        soma += vet[i];
        
        if (i == 0) {
            maior = menor = vet[0];
        }
        
        if (vet[i] > maior) {
            maior = vet[i];
        }
        
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }
    
    for (int i = 3; i >= 0; i--){
        printf("%.1f\n", vet[i]);
    }
    
    printf("\nA soma dos vetores eh: %.2f", soma);
    printf("\nA media dos vetores eh: %.2f", (soma / 4)); 
    printf("\nO maior valor do vetor eh %.2f", maior);
    printf("\nO menor valor do vetor eh %.2f", menor);
    
    return 0;
}