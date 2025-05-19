// iterativo

int reaisMaior (float reais[], int n, float x){
    int maiorQueX = 0;
    for(int i = 0; i < n; i++){
        if(reais[i] > x){
            maiorQueX ++;
        }
    }
    return maiorQueX;
}

// recursivo

int reaisMaior(float reais[], int n, float x, int i){
    if(i == n){
        return 0;//caso base
    }
    if (reais[i] > x){
        return 1 + reaisMaior(reais,n,x,i+1);
    } else{
        return reaisMaior(reais,n,x,i+1);
    }
}