int main()
{
    float* calculo=malloc(sizeof(float));
    float* p =malloc(sizeof(float));
    printf("\n Digite um valor real: ");
    scanf("%f", p);

    *calculo = 2 * (*p);
    printf("\n O dobro do valor escrito eh %f", *calculo);

    free(p);
    free(calculo);

    return 0;
}