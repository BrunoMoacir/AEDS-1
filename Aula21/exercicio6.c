#define _MAX 5

float calculoDiferenca(float M[MAX][MAX])
{
    float maiorAcima= M[0][1];
    float maiorAbaixo=M[1][0];

    for (int i = 0; i < _MAX; i++){
        for(int j = 0; j < _MAX; j++){
            if (i < j){
                if(M[i][j]> maiorAcima){
                    maiorAcima = M[i][j];
                }
            }else if (i > j){
                (if M[i][j] > maiorAbaixo){
                    maiorAbaixo = M[i][j];
                }
            }
        }
    }
    return maiorAcima - maiorAbaixo;
}