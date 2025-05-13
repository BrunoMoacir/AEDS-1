#define MAX_LIN 3
#define MAX_COL 3

bool elementoZero (float M[MAX_LIN][MAX_COL]){
    for(int i = 0; i < MAX_LIN; i++){
        for(int j = 0; j < MAX_COL; j++){
            if(M[i][j] == 0){
                return true;
            }
        }
    }
    return false;
}