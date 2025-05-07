void listarDiagonalSecundaria(float matriz[3][3]) {
    int n = 3;  // Tamanho da matriz quadrada
    printf("Valores da diagonal secundária:\n");
    
    for (int i = 0; i < n; i++) {
        // A diagonal secundária tem índices (i, n-i-1) para uma matriz quadrada
        printf("%.2f ", matriz[i][n-i-1]);
    }
    printf("\n");
}