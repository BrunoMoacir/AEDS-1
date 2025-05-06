void leMatriz(float M[MAX_LIN][MAX_COL])
{
    for (int i = 0; i< MAX_LIN; i++){ // percorre as linhas
        for (int j = 0; j < MAX_COL; j++){ // percorre as colunas
            printf("\n Digite o valor da posicao [%i][%i]", i,j);
            scanf("%f", &M[i][j]);
        }
    }
}