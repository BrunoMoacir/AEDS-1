void escreveInvertida(char str[]){
    int n = strlen(str)
    for (int i = n; i > 0; i--){
        printf("%s", str[i]);
    }
}