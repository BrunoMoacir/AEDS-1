void produtoMatrizes(float a[lin][col], float b[lin][col], float c[num][col])
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < lin; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < lin; k++)
            {
                c[i][j] = a[i][j] * b[i][j];
            }
        }
    }
}