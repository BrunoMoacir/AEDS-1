#define MAX_LIN 3
#define MAX_COL 3

void leSecundaria (float M[MAX_LIN][MAX_COL]){
    printf("\n lista dos valores da diagonal secundaria: ");

     for(int i = 0, j = 2; i <= 2 && j >= 0; i++, j--){
        printf("\nPosicao [%d][%d]: %.f ",i, j, matriz[i][j]);
}
}