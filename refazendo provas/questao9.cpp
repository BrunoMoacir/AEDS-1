int posicaoMaiorValor(int matriz[MAX_LIN][MAX_LIN]) {
    int maior = matriz[0][0];
    int linhaMaior = 0;
    int colunaMaior = 0;

    // Percorre toda matriz para encontrar o maior valor e sua posição
    for (int i = 0; i < MAX_LIN; i++) {
        for (int j = 0; j < MAX_LIN; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Verifica posição do maior valor em relação à diagonal
    if (linhaMaior == colunaMaior) {
        return 0;   // na diagonal principal
    }
    else if (colunaMaior > linhaMaior) {
        return 1;   // acima da diagonal principal
    }
    else {
        return -1;  // abaixo da diagonal principal
    }
}
