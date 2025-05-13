#define MAX_lIN 2
#define MAX_COL 4

void verificaMatrizes(float M[MAX_lIN][MAX_COL,float N[MAX_lIN][MAX_COL]){
    for(int i = 0; i < MAX_lIN; i++){
        for (int j = 0; j < MAX_COL; j++){
            if (M[i][j] == N[i][j]){
                return true;
            }
        }
    }
    return false;
}