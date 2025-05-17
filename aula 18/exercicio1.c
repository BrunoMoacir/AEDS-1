#include <stdlib.h>  // necessário para usar malloc

// nao e perimitido o uso de variaveis simples, apenas alocacao dinamica
int main()
{
    float *a,*b;// declara 2 ponteiros para float
    a = malloc(sizeof(float));// aloca 4 bytes e devolve o endereco do 1.o
    printf("\n Digite o 1.o valor");
    scanf("%f",a)// SEM &, pois a ja é um ponteiro
    // lê o valor diretamente no endereco apontado

    b = malloc(sizeof(float));
    printf("\nDigite o 2.o valor");
    scanf("%f", b)// novamente sem o &

    float *soma;
    soma = malloc(sizeof(float));// necessario para alocar memoria
    *soma = *a+*b;// acessa os valores de a e b usando *
    printf("\n A soma de %1.f e %1.f eh: %1.f", *a,*b,*soma);
}