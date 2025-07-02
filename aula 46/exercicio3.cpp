bool verificaDominacao(float A[][MAX], int i, int j){
    bool linhaDomina = false
    for(int k = 0; k < MAX; k++){
        if(A[i][k] >= A[k][j]){// linha escolhida e passa por toda a coluna e depois coluna escolhida e passa por toda a linha 
            linhaDomina = true;
        }
    }
    return linhaDomina;
}