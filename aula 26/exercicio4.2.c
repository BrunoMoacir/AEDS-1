#define MAX_lIN 2
#define MAX_COL 4

void copiaTransposta (float M[MAX_lIN], float N[MAX_COL]){
    for (int i = 0; i < MAX_lIN; i++){
        for (int j = 0; j < MAX_COL; j++){
            N[j][i] = M[i][j];
        }
    }
}