// recebe uma string e fala o tamanho

int tamanhoString(char* str){
    int i = 0;
    int TAM=0;
    while (str[i] != '\0'){
        TAM++;
        i++; 
    }
    return TAM;
}

// invertendo palavra str
// strlen = determinar o numero de caracteres que contem a str
void invertaFrase(char* str){
    int len = strlen(str);
    for(int i = len-1; i>=0;i--){
        printf("%c", str[i]);
    }
}
// comparar string strcmp
void comparaString(char* str1, char* str2){
     
}