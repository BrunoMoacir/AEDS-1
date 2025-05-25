typedef struct{
    char nome[100];
    int idade;
}Pessoa;

void listarPessoas(Pessoa pessoas[], int i, int tamanho){
    if (i< tamanho){
        printf("Nome:%s, idade: %i", pessoas[i].nome, pessoas[i].idade);
        listarPessoas(pessoas,i + 1,tamanho);
    }
}
void listarPessoas1(Pessoa pessoas[], int tamanho){
    listarPessoas(pessoas,0,tamanho);
}