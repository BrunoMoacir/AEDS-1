// versao recursiva

int qtNegativosRed(int M[],int tamanho,int i){
    if (i == tamanho){
        return 0;// caso base
    }
    if(M[i]<0){
        return 1 + qtNegativosRed(M, tamanho, i+1); // se o atual elemento for negativo, soma 1 e continua a contagem
    } else { // se nao for negativo, apenas confinua para o proximo 
        return qtNegativosRed(M, tamano, i+1);
    }
}
int main() {
    int M[5] = {1, 2, -1, -2, 3}; // Vetor de exemplo com dois números negativos

    // Chamada da função recursiva, começando do índice 0
    int negativos = quantNegativosRec(M, 5, 0);

    // Exibe o resultado
    printf("\nA quantidade de numeros negativos eh %d\n", negativos);
    return 0;
}