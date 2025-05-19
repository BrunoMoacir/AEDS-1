void ordenaCrescente (void reais[], int n){
    
    for(int j = 0; j < n; j++){
        int posMaior = 0;

        for(int i = 0; i < n - j; i ++){
            if(reais[i] > reais[posMaior]){
                posMaior = i;
            }
        }

        // Troca o maior valor encontrado com a última posição "não ordenada"
        float temp = arr[(n - 1) - j];          // Guarda o valor do final atual
        arr[(n - 1) - j] = arr[pos_maior];      // Coloca o maior valor na posição final
        arr[pos_maior] = temp;                  // Coloca o antigo valor final na posição do maior
    }
}