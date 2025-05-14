int verificaMaior(float M[], int n,int i, float x){
    if (n == 0){
        return 0;
    }
    if(M[i] > x){
        return 1+verificaMaior(M,n, x, i+1);
    }else{
        return verificaMaior(M,n,x,i+1);
    }
}