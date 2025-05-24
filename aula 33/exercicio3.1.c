typedef struct{
    char nomes[50];
    int idade;
}Pessoa;
void listaPessoas(Pessoa pessoas[], int n){
    for(int i = 0; i < n; i++){
        printf("Pessoa:%s", pessoas[i].nomes);
        printf("\nidade %i", pessoas[i].idade);
    }
}
// iterativo
void listaPessoas(Pessoa pessoas[], int n){
    if(n > 0){
        listaPessoas(pessoas,n-1);
        printf("\nPessoa:%s",pessoas[n].nome);
        printf("\nidade %i", pessoas[n].idade);
    }
}