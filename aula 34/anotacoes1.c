typedef struct{
    char nome[50];
    int idade;
}Pessoa;
void escrevePessoa(Pessoa PESSOA){
    printf("\nNome: %s", PESSOA.nome);
    printf("\nIdade: %i", PESSOA.idade);
}
void listaInvertido(Pessoa pessoas[]){
    listainvertidoRec(pessoas,TAM);
}
void listaInvertidoRec(Pessoa pessoas[],int n){
    if (n > 0){
        escrevePessoa(pessoas[n-1]);
        listaInvertido(pessoas,n-1);
    }
}
// comparar strings(provavelmente cai na prova)

char* str1 = "Bernardo";
char* str2 = "Tiago";

if(strcmp(str1,str2))==0{
    return true;
}
return false;
//
typedef struct{
    char nome[50];
    int idade;
}Pessoa;
int main(){
    Pessoa P[2] = {"Rafa",18,"Duda",16};
    listaPessoas(P,"duda");
}
// pesquisa de nome
void listaPessoas(Pessoa pessoas[],char* nome){
    for(int i = 0; i < TAM; i++){
        if(strIguais(pessoas[i].nome,nome)){
            escrevaPessoa(pessoas[i]);
        }
    }
}
bool strIguais(char str1[],char str2[]){
    bool iguais = true;
    int i = 0;
    while (iguais && i < maxStr && str1[i] != '\0' && str2[i] != '\0'){
        if (toupper(str1[i]) != toupper(str2[i])){
            iguais = false;
        }
        i++;
    }
    return iguais;
}
// recursivamente
bool strIguaisR(char* str1, char* str2){
    return strIguaisRec(str1,str2,0);
}


bool strIgualRec(char* str1, char* str2, int i){
    bool iguais = true;
    if(str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]) iguais = false;
        else iguais = strIgualRec(str1,str2,i+1);
    }
}