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

int porcentagemAproRepro(int turma[], int n){
    int aprovados = 0;
    int reprovados = 0;
    for(int i = 0; i < n; i++){
        if(turma[i]< 60){
            reprovados++;
        } else{
            aprovados++
        }
    }
    float pAprovados = (float)countAprovados / n * 100;
    float pReprovados = (float)countReprovados / n * 100;
    
    printf("\nPorcentagem de aprovados: %.1f%%", pAprovados);
    printf("\nPorcentagem de reprovados: %.1f%%", pReprovados);
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

void menorNotaAprovados(int turma[], int n){
    int menorAprovado = 100;
    for(int i = 0; i < n; i++){
        if (turma[i] >=60 && turma[i] < menorNota){
            menorNota = turma[i];
        }
    }
    printf("\nA menor nota entre os aprovados eh:%i", menorNota);
    return menorNota;
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