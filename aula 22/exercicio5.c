void ordemCrescente(float arr[], int n) {
    // Percorre cada posição do array
    for (int j = 0; j < n; j++) {
        int pos_maior = 0;  // Começa assumindo que o maior valor está na posição 0

        // Procura o maior valor na parte ainda "não ordenada" do array
        for (int i = 1; i < n - j; i++) {
            if (arr[i] > arr[pos_maior]) {
                pos_maior = i;  // Atualiza a posição do maior valor encontrado
            }
        }

        // Troca o maior valor encontrado com a última posição "não ordenada"
        float temp = arr[(n - 1) - j];          // Guarda o valor do final atual
        arr[(n - 1) - j] = arr[pos_maior];      // Coloca o maior valor na posição final
        arr[pos_maior] = temp;                  // Coloca o antigo valor final na posição do maior
    }
}
