// funcao que recebe uma matriz de reais e dois valores inteiros relaticos à posicao de um elemento (coluna e linha, a funcao devera gerar a media dos valores dele e seus vizinhos)
float mediaVizinhos (float M[][MAX_COL], int linha, int coluna){
    float soma = 0;
    int c = 0;
    for(int i = linha -1; i <= linha+1; i++){
        for(int j = coluna -1; j <= coluna; j++){
            if (i >= 0 && i < MAX_LIN && J >= 0 && k < MAX_COL){
                soma = soma + M[I][J];
                C ++;
            } // fim if
        }// fim for j
    }// fim for i
    return soma/c;
}