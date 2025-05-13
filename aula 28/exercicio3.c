int verificaTamanhoI ( char str1[], char str2[]){
    for (i = 0; str1[i] != '\0'; i++); // conta os caracteres da 1 string

    for (j = 0; str2[j] != '\0'; j++); // conta os caracteres da 2 string

    return (i == j); // compara os tamanhos
}

int verificaTamanhoRec ( char str1[], char str2[]){
    if (str[i] == '\0'){
        return 0;
    }else {
        return 1 + verificaTamanhoRec(str,i+1);
    }
}