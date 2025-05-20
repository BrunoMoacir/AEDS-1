int main ()
{
    float *lado, *perimetro;

    perimetro = malloc(sizeof(float));
    lado = malloc(sizeof(float));

    if (lado == NULL || perimetro == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    printf("\n Digite o valor do lado do quadrado: ");
    scanf("%f", lado);

    *perimetro = 4 * (*lado);

    printf("\n O perimetro do quadrado eh %f", *perimetro);

    free(lado);
    free(perimetro);
}