// iterativa

void escreveInverso(char* str){
    int n = strlen(str);
    for(int i = n; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}

// recursiva
// strlen(str) se usa quando preciso saber quantos caracteres a string possue, sem contar o '\0'
void escreveInverso(char* str, int n){
    if (str[i]== '\0'){
        return;
    }
    escreveInverso(str,i+1);// chamada recursiva p proximo caractere
    printf("%c", str[i]);// imprime apos voltar da recursao
}