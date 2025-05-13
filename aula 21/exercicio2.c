#include <stdlib.h>
#include <stdio.h>


int lerNotas(int turma[],int n){
    int soma = 0;
    printf("\nInsira todas as notas da sua turma\n");
    for(int i = 0; i < n; i++){
        printf("Nota %d: ", i+1);
        scanf("%d"n &turma[i]);
        soma += turma[i];
    }
    return soma;
}

int maiorNota(int turma[], int n){
    int maior = turma[0];
    for(int i = 0; i < n; i++){
        if (turma[i] > maior){
            maior = turma [i];
        }
    }
    return maior;
}

int menorNota(int turma[], int n){
    int menor = turma[0];
    for(int i = 0; i < n; i++){
        if (turma [i] < menor){
            menor = turma[i];
        }
    }
    return menor;
}
void mediaNotas(int turma[], int n, int soma){
    float media = (float)soma/n;
    int acimaMedia = 0;
    printf("\nA media das notas eh: %1.f", media);
    for(int i = 0; i < n; i++){
        if(turma[i] >=media){
            acimaMedia ++;
        }
    }
    printf("\n%i alunos foram acima da media.", acimaMedia);
}

int main()
{
    int n = 0, soma = 0;
    printf("\nInsira quantos alunos tem em sua turma: ");
    scanf("%i", &n);
    // tamanho turma
    int *turma = (int *)malloc(n * sizeof(int));

    soma = lerNotas(turma, n);
    mediaNotas(turma, n, soma);

    free(turma);
    return 0;
}