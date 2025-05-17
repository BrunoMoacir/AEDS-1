#include <stdio.h>
#include <stdlib.h>

// declare uma coleção de 3 nomes
char* nomes[3]={"bruno","pedro","tiago"};
int idades[3]= {22,19,30};
// listar o vetor de nomes
void listarNomeIdade(char* nomes[],int idades[]){
for (int i = 0; i < 3; i++){
    printf("nome:%s, idade %i", nomes[i], idade[i]);
}
}
// idade media das pessoas
float mediaIdades(int idades[]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        soma += idades[i];
    }
    printf("\n A media das idades eh %i", soma/3);
}
// idade acima da media
float acimaMedia(int idades[], float media){
    int contador = 0;
    for (int i = 0; i < 3 ; i++){
        if (idade [i] > media){
            contador++;
        }
    }
}
// calcular maior idade
float maiorIdade(int idades[]){
    int maior = idades[0];
    for(int i = 0; i < 3; i++){
        if (idades[i]>maior ){
            maior = idades [i];
        }
    }
    return maior;
}
// listar nome de pessoas de menor idade
void listarNomesMenor(char* nomes[], int idades[]){
    for(int i = 0; i < 3; i++){
        if (idades [i] < 18){
            printf("%s\n",nomes[i]);
        }
    }
}
// deslocar menor idade para primeira posicao
void deslocaValor(int idades[], char* nomes[], int tamanho){
    menor = 0
    for (int i = 0; i < 3; i++){
        if (idade [i] < idades[menor]){
            menor = i;
        }
    }
    //realiza a troca
    if(menor != 0){
        int auxIdade = idades[0];
        idades[0] = idades[menor];
        idades[menor] = auxIdades;
        //troca de nomes
        char* auxNome = nome [0];
        nomes[0] = nomes[menor];
        nomes[menor]=auxNome;
    }
}
// buscar pela idade
int buscarIdade(int idades[],int chave){
    for(int i = 0; i < 3; i++){
        if(idades[i] == chave){
            return i;
        }
    }
    return -1;
}
void buscaCaractere(char c, char* nomes[]){
    int contador = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; nomes[i][j] != '\0'; j++){
            if(nomes[i][j] == c){
                contador++;
            }
        }
    }
    printf("\n %i ocorrencias de %c em %s",contador,c,nomes[i]);
}
int main() {
    printf("=== Nomes ===\n");
    listarNomesIterativo();
    
    printf("\n=== Nomes e Idades ===\n");
    listarNomesIdadesIterativo();
    
    float media = calcularMediaIdadeIterativo();
    printf("\nMedia de idade: %.1f\n", media);
    
    printf("Pessoas acima da media: %d\n", contarAcimaMediaIterativo(media));
    
    printf("Maior idade: %d\n", encontrarMaiorIdadeIterativo());
    
    printf("\n=== Menores de idade ===\n");
    listarMenoresIterativo();
    
    deslocarMenorIterativo();
    printf("\n=== Apos deslocar menor idade ===\n");
    listarNomesIdadesIterativo();
    
    int pos = buscarIdadeIterativo(25);
    printf("\nPosicao da idade 25: %d\n", pos);
    
    printf("\n=== Ocorrencias de 'a' ===\n");
    contarCaractereIterativo('a');
    
    return 0;
}