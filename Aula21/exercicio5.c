float maiorValorMatriz(m[MAX_LIN][MAX_COL], int linha)
{
    float maiorNumero = m[linha][0];
    for (int j = 1; j < MAX_LIN; j++){
        if ( m[linha][j] > maiorNumero){
            maiorNumero = m[linha][j];
        }
    }
}