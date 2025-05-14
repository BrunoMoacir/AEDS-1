// escrever palavra ao contrario iterativo

void escreveInverso(char* str){
    int n = strlen(str);
    for(int i = 0; i > n; i--){
        printf("%c", str[i]);
    }
}