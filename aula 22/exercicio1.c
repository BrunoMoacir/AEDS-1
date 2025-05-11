void trocarPrimeiroUltimo (numeros[], int n)
{
    (if n > 0){
    int aux = numeros[0];
    numeros [0] = numeros [n-1];
    numeros [n-1] = aux;
    }
}