// iterativo
int contNegativos(float reais [], int n){
    int negativos = 0;
    for(int i = 0; i < n; i++){
        if (reais[i] < 0){
            negativos++;
        }
    }
    return negativos;
}
// recursivo
int contNegativosRec(float reais [], int n, int i){
    if (i == n){
        return 1;
    } 
    if (reais[i] < 0){
        return 1 + contNegativosRec(reais,n,i+1);
    } else{
        return contNegativosRec(reais,n,i+1);
    }
}