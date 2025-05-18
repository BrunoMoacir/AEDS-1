#include <stdio.h>
#include <stdlib.h>

// declarar uma coleção de 3 nomes
char* nomes[3]={"bruno","pedro","artur"};
int idades[3]={22,19,30};
// listar o vetor de nomes
void listarNomeIdadeRecursivo(char* nomes[], int idades[], int i) {
    if (i >= 3) return; // caso base: já listou os 3
    printf("nome: %s, idade: %d\n", nomes[i], idades[i]);
    listarNomeIdadeRecursivo(nomes, idades, i + 1); // chamada recursiva
}
// idade media das pessoas
float mediaIdades(int idades[], int n){
    int soma =  somaIdadesRecursiva(idades,0,n);
    return(float)soma/n;
}
// calculo maior idade
float maiorIdade(int idades[], int i, int n){
    if(i == n - 1)return idades[i];
    float maior = maiorIdadeRec(idades, i + 1, n);
    if (idades[i] > maiorDoResto)
        return idades[i];
    else
        return maiorDoResto;
}