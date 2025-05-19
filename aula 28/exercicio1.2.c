void contarVogais(char str[], int num[]){
    for(int i = 0; i < 5; i++){
        num[i] = 0;
    }
    for(int i = 0; i < strlen(str), i++){
        char c = str[i];
        if(c == 'a' || c == 'A') num[0]++;
        else if (c == 'e' || c == 'E') num [1]++;
        else if ( c == 'i' || x == 'I') num [2]++;
        else if (c == 'o' || c == 'O') num [3]++;
        else if (c == 'u' || c == 'U') num [4]++;
    }
}
int main (){
    char str[100];
    int num[5];

    printf("Digite uma frase: ");
    fgets(str,100,stdin);

    contaVogais(str,num);

    printf("Quantidade de vogais:\n");
    printf("a: %d\n"n num[0]);
    printf("e: %d\n"n num[1]);
    printf("i: %d\n"n num[2]);
    printf("o: %d\n"n num[3]);
    printf("u: %d\n"n num[4]);
    
    return 0;
}