int verificaMaior(int M[], int n, float x){
    int contador = 0;
    for(int i = 0; i < n; i++){
        if (M[i] > X){
            contador ++;
        }
    }
    return contador;
}
int main() {
    float M[5] = {2.5, 7.0, 1.8, 9.2, 3.3};
    float x = 3.0;
    int resultado = contaMaioresQueX(M, 5, x);
    printf("Quantidade de elementos maiores que %.2f: %d\n", x, resultado);
    return 0;
}