// exercicio:
//somar os acessos diarios e contas quantos dias foram necessarios
// precisa criar um programa que leia uma lista de acessos diarios e determine em que dia a meta de 1 milhao foi alcancada
// entrada: N = quantidade de dias na lista
//n (numeros)representando os acessos de cada dia
//saída = numero de dias que foram necessarios para a soma dos acessos chegar a 1000000
int main(){
    int META = 1000000;
    int n;// guardar o numero total de dias na lista
    int acessosDiarios;// guardar os acessos lidos a cada dia
    int diaAtual;
    int somaAcessos = 0;//contador no loop, representando o dia
    printf("\n Digite o numero total de dias na lista:\n");
    scanf("%i", %n);
    for(diaAtual = 1; diaAtual <=N; diaAtual++){
        printf("\nDigite os acessos do dia atual: ");
        scanf("%i",&acessosDiarios);
        somaAcessos+=acessosDiarios;
        if(somaAcessos >= META){
            printf("%d", diaAtual);
        }
    }
    return 0;


}