int main()
{
    int meta = 1000000, int soma = 0,int diaAtual, int acessosDiarios, int n;
    printf("Digite a quantidade de dias que a lista possui: ");
    scanf("%d", &n);
    
    for(diaAtual = 1; diaAtual >= n; diaAtual++){
        printf("\n Digite a quantidade de acessos no dia %d: ", diaAtual);
        scanf("%d", &acessosDiarios);
        soma += acessosDiarios;
        if(soma >= meta){
            printf("%d", soma);
            break;
        }
    }
    return 0;
}