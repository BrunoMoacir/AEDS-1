bool somaMatrizes (float M[3][3], float N[3][3], float resultado[3][3])
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            resultado [3][3] = 0;
            for (int k = 0; k < 3; k++){
                resultado[i][j] += M[i][k] * N[k][j];

            }
        }
    }
    return soma;
}