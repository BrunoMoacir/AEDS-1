typedef struct{
    float A;
    float B;
    float C;
} triangulo

int contarEquilateros(triangulo vetor[], int tamanho){
    int contagem = 0;
    for(int i = 0; i < tamanho; i ++){
        float a = vetor[i].A;
        float b = vetor[i].B;
        float c = vetor [i].C;

        if(a+b>c && a+c>b && b+c>a){
            if(a == b && b == c){
                contagem ++;
            }
        }
    }
    return contagem;
}