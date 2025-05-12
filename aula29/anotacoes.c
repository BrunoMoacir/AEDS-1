// jeito do professor
// funcao receber 3 strings e concatenar as 2 na 3.a
// strlen é uma funcao da biblioteca <string.h> que serve para contar os caracteres de uma string sem contar o \0


void contatenaString(char* str1, char* str2, char* str3)
{
    if (strlen(str3) > = strlen(str1) + str2)
    int i = 0;
    while (str1[i] != '\0'){ 
    str3[i] = str1[i];// copia um caractere de str1 para str3
        i++; // avança o indice
    }
    int j = 0; // controla a posicao de str2
    while (str2[j]!='\0'){
        str3[i] = str2[j]; // copia um caractere de str2 para o final de str3
        i++;
        j++;
    }
}

// jeito do progessor contar quantidade de vogais

void qtVogais ( char* str, int qtVogais[])
{
    for(int i = 0; i < 5; i++);// nao entendi o uso desse for

    char vogais[] = {'a','e','i','o','u'};
    int i = 0;
    while (str[i]!=10){
        for (int j = 0; j < 5; j++){
            if (tolower(str[i]) == vogais[j])
            qtvogais[j]++;
        }
        i++
    }
}

// nome e idade de um aluno em struct


define MAX_STR 50

typedef struct{
    char nome[MAX_STR];
    int idade;
}Pessoa;
