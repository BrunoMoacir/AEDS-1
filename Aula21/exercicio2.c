#include <stdbool.h>

void verificaMatrizes(float M[MAX_LIN][MAX_COL], float N[MAX_LIN][MAX_COL])
{
    for (int i = 0; i < MAX_LIN; i++){
        for (int j = 0; j < MAX_COL; j++){
            if (M[i][j] != N[i][j]){
                return false;
            }
        }
    }
    return true;
}