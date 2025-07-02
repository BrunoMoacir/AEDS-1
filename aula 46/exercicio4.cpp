// percorrer cada linha, e para cada linha encontrar o maior valor
// entre todos os maiores, encontrar o menor deles
// retornar ele
int minimoMaximo(int m[n][n])
{
    int menorMaximo = 0;
    for (int i = 0; i < n; i++)
    {
        int maxlinha = 0;

        for (int j = 0; j < n; j++)
        {
            if (m[i][j] > maxlinha)
            {
                maxlinha = m[i][j];
            }
        }
        if (maxlinha < menormaximo)
        {
            menorMaximo = maxlinha;
        }
    }
}