void trocaMenor(float numeros [], int n){
    int menor = 0;
    for (int i = 1; i < n; i++){
        if(numeros [i] < numeros[menor]){
            menor = i;
        }
    }
    float temp = numeros[menor];
    numeros [menor]= numeros[0];
    numeros [0] = temp;
}