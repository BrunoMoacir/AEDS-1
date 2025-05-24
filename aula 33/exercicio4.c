// pesquisa de nome
void listaPessoas(Pessoa pessoas[],char* nome){
    for(int i = 0; i < TAM; i++){
        if(strIguais(pessoas[i].nome,nome) == 0){
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
