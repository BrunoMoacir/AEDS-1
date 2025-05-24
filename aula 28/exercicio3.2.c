void comparaTamanhos(char* str1, char* str2){
    int TAM1 = 0, TAM2 = 0;
    int i = 0,j = 0;

    while (str1[i] != '\0'){
        TAM1++;
        i++;   
    }

    while (str2[i] != '\0'){
        TAM2++;
        j++;
    }

    if(TAM1 == TAM2){
        printf("\n As strings possuem o mesmo tamanho");
    } else{
        printf("\n As strings sao de tamanho diferente");
    }
}