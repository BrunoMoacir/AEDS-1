//verificar de o numero e natural perfeito
// versao iterativa
bool perfeito(int N){
    bool ehPerfeito = false;
    int soma = 1;
    for(int divisor = 2; divisor<=N/2; divisor++){
        if(N%divisor == 0)soma += divisor;
    }
    if(soma == N && N>1)ehPerfeito = true;
    return ehPerfeito;
}
// versao recursiva
bool perfeito(int N){
    bool ehPerfeito = false;
    if(N > 1){
        int soma = somaDivisores(N,N/2);
        if(soma == N) ehPerfeito = true;
    }
    return ehPerfeito;
}
int somaDivisores(int N, int divisor){
    int soma;
    if(divisor == 0)soma = 0;
    if(N % divisor == 0)soma = divisor + somaDivisores(N,divisor-1);
    else soma = somaDivisores(N,divisor - 1);
    return soma;
}