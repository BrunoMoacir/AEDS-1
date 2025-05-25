int main()
{
    int* valor=malloc(sizeof(float));
    printf("\n Digite o valor: ");
    scanf("%i",valor);

    float* resultado = malloc(sizeof(float));
    *resultado = 2 * (*valor);
}