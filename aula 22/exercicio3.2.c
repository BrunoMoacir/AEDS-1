void trocaPosicao(float reais[], int n){
    float maior = 0;
    for (int i = 0; i < n; i++){
        if (reais[i] > maior){
            maior = i;
        }
    }

    float temp = reais[maior];
    reais[maior] = reais [n-1];
    reais [n-1] = temp; 
}