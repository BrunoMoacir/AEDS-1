void trocaPosicoes(float reais [], int n){
    int menorPos = 0;
    for(int i = 0; i < n; i ++){
        if(reais [i] < reais[menorPos]){
            reais[menorPos] = reais [i];
        }
    }
    int aux = reais[menorPos];
    reais[menorPos] = reais[0];
    reais [0] = aux;
}