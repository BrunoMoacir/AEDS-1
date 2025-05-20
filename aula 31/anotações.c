// abstração de dados
// abstração de operacoes
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#define MAX_STR 50
#define MAX 100
int TAM = 0;


typedef struct{
    int dias;
    int mes;
    int ano;
}Data;
int diasMes(Data data){
    int dias[]={31,28,31,30,31,30,31,31,30,31,30,31};
    return dias[data.mes-1];
}
char* mesExtenso(Data data){
    char* mes[]={"janeiro","fevereiro",...};
    return mes[data.mes-1];
}
bool ehBissexto(Data data){
    return ( (data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0) );
}
void escreveData(Data data){
    printf("\n%d,%d,%d",
    data.dia,
    data.mes,
    data.ano);
}
void leiaData(Data* data){
    printf("\ndd/mm/aaaa");
scanf("%d/%d/%d",
%data->dia,
&data->mes,
&data->ano);
}
#endif

int main()
{
    Data nascimento;
    leiaData(&nascimento);
    escrevaData( nascimento);

    printf("\n O mes %s tem %i dias",mesExtenso(nascimento), diasMes(nascimento);
    return 0;
}