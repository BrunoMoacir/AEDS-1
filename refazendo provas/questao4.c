// A diagonal principal da matriz é formada pelos elementos que a linha sao iguais a coluna (i = j)
// A diagonal secundaria é formada pelos elementos em que a soma dos indices da linha seja (i + j = n + 1)
// em uma matriz n x n os elementos ACIMA da diagonal secundaria é formado por i + j < n - 1

float mediaValoresAcima (M1[NUM_LIN][NUM_LIN]){
    float soma = 0; // acumula soma dos elementos
    int contador = 0;// conta elementos acima da diagonal

    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_LIN; j++){
            // coloco a condicao para estar ACIMA da diagonal secundaria
            if(i + j < NUM_LIN - 1){
                soma += matriz[i][j];// SE O ELEMENTO ESTIVER ADEQUADO, SERA SOMADO
                contador++;
            }
        }
    }
    return soma / contador;
}   

// recursivo

