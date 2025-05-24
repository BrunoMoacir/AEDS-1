void escreveString(char* str){
    int i = 0;
    while(str[i]!='\0'){
        i++;
        for(int j = i; j >=0; j++){
            printf("\n%c", str[i])
        }
    }
}
// iterativo
void escreveString(char* str, int i){
    inverteRecursiva(str,i+1);
    printf("%c", str[i]);
}