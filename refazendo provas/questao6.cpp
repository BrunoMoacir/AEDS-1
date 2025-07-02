int comparaIguais(float a[], float b[], int n)
{
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            contador++;
        }
    }
    return contador;
}
int comparaIguais(float a[], float b[], int n, int i)
{
    if (i >= n)
    {
        return 0; // fim do vetor
    }

    if (a[i] == b[i])
    {
        return 1 + comparaIgualAux(a, b, n, i + 1);
    }
    else
    {
        return comparaIgualAux(a, b, n, i + 1);
    }
}

void comparaIguaisAux(float a[], floatb[], int n)
{
    return comparaIguais(a, b, n, 0);
}