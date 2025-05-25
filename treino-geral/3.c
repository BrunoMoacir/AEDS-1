bool ehInverso(int v1[],int v2[],int n){
    bool inverso = true;
    for(int i = 0; i < n; i++){
        if(v[i] != v[n-1-i]) inverso = false;
    }
    return inverso;
}
bool ehInverso (int v1[],int v2[],int n, int i){
    bool inverso = true;
    if(i>=n){
    if(v1[i] !=v2[n-1-i]){
        inverso = false;
        ehInverso(v1[],v2[],n,i+1);
    }
}
    return inverso;
}
float mediaAcima(float m[][5],int n){
    float soma = 0;
    float count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i+j < n-1){
                soma += m[i][j];
            }
        }
    }
    return soma/count;
}