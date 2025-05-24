// escrever um programa para somar duas matrizes (a e b) 3x2 em outra c
void somaMatriz(float M1[3][2], float M2[3][2], float M3[3][2]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            M3[i][j] = M1[i][j]+M2[i][j];
        }
    }
}

// maior valor da matriz

float maiorValor (float M[4][4]){
    float maior = M[0][0];// inicializado com o primeiro valor
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(M[i][j] > maior){
                maior = M[i][j];
            }
        }
    }
    return maior;
}
 