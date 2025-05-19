void trocaPosicao(float arranjo[], int n){
    if(n < 0){
        int aux = arranjo[0];
        arranjo [0] = arranjo[n-1];
        arranjo [n-1] = aux;
    }
}