// letra A
static int tamanhoIgual(string A, string B)
{
    int contador = 0;
    while (A[contador] != '\0' && B[contador] != '\0')
    {
        if (A[contador] == B[contador])
        {
            contador++;
        }
    }
    return contador;
}
// b recursivo
static int tamanhoIgual(string A, string B, int i){
    if(i >= A.length() || i >=B.length()|| A[i] != B[i])
        return 0;
    else{
        return 1+ tamanhoIgual(A,B,i+1);
    }
}
static int tamanhoIgualRec(string A, string B){
    return tamanhoIgual(A, B, 0);
}