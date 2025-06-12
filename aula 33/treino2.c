void listaPessoas(Pessoa pessoas[],int n){
    if(n > 0){
        printf("Nome: %c, idade: %i", pessoas[n].nome,pessoas[n].idade);
        listaPessoas(pessoas[],n-1);
    }
}
void listaPessoas (Pessoa pessoas[],int n){
    for(int i = 0; i < n; i++){
        printf("nome: %c , idade: %i",pessoas[i].nome, pessoas[i].idade);
    }
}