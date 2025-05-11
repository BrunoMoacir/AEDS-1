void trocaMaior (int numeros [], int n){
    int maior = 0;
   for(int i = 1; i < n; i++ ){
    if (numeros[i] > numeros[maior]){
        maior = i;
    }
   }// encontrei a posicao do maior

   float temp = numeros[maior];
   numeros[maior]= numeros[n-1];
   numeros [n-1] = temp; // troquei as posicoes
}