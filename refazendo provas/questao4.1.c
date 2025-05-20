void inverteString(char* str[], int n){
    for(int i = n-1; i >=0; i--){
        printf("%s", str[i]);
    }
}

// recursivo
void inverteString(char* str[], int n, int i){
    if (n >= 0){
        printf("%s", str[i]);
        inverteString(str,n,i-1);
    }
}