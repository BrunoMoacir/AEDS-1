#define MAX_COL 3
#define MAX_LIN 3 // pra ser uma matriz quadrada

float diferencaMaioresDiagonal(float matriz[MAX_LIN][MAX_COL])
{
    float maiorAcima = matriz[MAX_LIN][0];
    float maiorAbaixo = matriz[0][MAX_COL]; 
    for (int i = 0; i < MAX_LIN; i++)
    {
        for (int j = 0; j < MAX_COL; j++)
        { 
            if (i < j && matriz[i][j] > maiorAcima)
            {
                maiorAcima = matriz[i][j];
            }
            if (i > j && matriz[i][j] > maiorAbaixo)
            {
                maiorAbaixo = matriz[i][j];
            }
        }
    }
    printf("\nMaior acima da diagonal: %.1f", maiorAcima);
    printf("\nMaior abaixo da diagonal: %.1f", maiorAbaixo);
    if(maiorAcima >= maiorAbaixo) return maiorAcima - maiorAbaixo;
    else return maiorAbaixo - maiorAcima;
}