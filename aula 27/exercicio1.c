#include <stdio.h>
#include <stdbool.h>

bool verificaZero (float M[3][3])
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (M[i][j] == 0){
                return true;
            }
        }
    }
    return false;
})