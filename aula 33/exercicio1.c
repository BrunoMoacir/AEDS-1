// funcao que receba duas estruturas do tipo Pessoa e verifica se sao iguais ou nao

typedef struct{
    char nome [100];
    int idade;
} Pessoa;

bool comparaString(char str1[], char str2[]){
    for(int i = 0; i <= '\0'; i++){
        if (str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

bool verificaPessoa(Pessoa pessoa1, Pessoa pessoa2){
    bool sucesso = false;
    if (comparaString(pessoa1.nome, pessoa2.nome) && pessoa1.idade == pessoa2.idade ){
         sucesso = true;
    }
    return sucesso;
}
// outra resolucao
bool verificaPessoas(Pessoa a,Pessoa b){
    if(a.idade != b.idade)return false;

    for(int i = 0; a.nome[i] || b.nome[i]; i++){
        if(a.nome[i] != b.nome[i])return false;
    }
    return true;
}