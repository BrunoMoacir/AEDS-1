#define MAX_LIN 3
#define MAX_COL 3

void produtoMatrizes(M[MAX_LIN][MAX_COL], N[MAX_LIN][MAX_COL], P[MAX_LIN][MAX_COL]){
    for(int i = 0; i < MAX_LIN; i++){
        for (int j = 0; j < MAX_COL; j++){
             resultado [3][3] = 0;
            for (int k = 0; k < 3; k++){
                P[i][j] += M[MAX_LIN][MAX_COL]* N[MAX_LIN][MAX_COL];
        }
    }
}