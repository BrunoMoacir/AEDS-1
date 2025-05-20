float maiorValorColunas(float matriz[NUM_LIN][NUN_LIN], int i, int j){
    float maiorLinha = matriz[i][0];
    float maiorColuna = [0][j];
    for(int col = 1; col < NUM_LIN; col++){
        if (matriz[i][col] > maiorLinha){
            maiorLinha = matriz[i][col];
        }
        for(int lin = 1; lin < NUM_LIN; lin++){
            if(matriz[lin][j]> maiorColuna){
                maiorColuna = matriz[lin][j];
            }
        }
    }
    return maiorColuna == maiorLinha;
}