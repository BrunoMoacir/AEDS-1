//listar invertido um vetor de estruturas
// construa uma funcao que receba um arranjo de pessoas e as liste de forma invertida em relacao ao arranjo: da ultima pessoa ate a primeira
typedef struct{
    char nome [50];
    int idade;
} Pessoa;
void listaInvertido (Pessoa pessoas[]){
    for(int i = TAM -1; i >=0; i--){
        escrevaPessoa(pessoas[i]);
    }
}
void escrevaPessoa(Pessoa PESSOA){
    printf("\n Nome: %s", PESSOA.nome);
    printf("\n Idade: %s", PESSOA.idade);
}

// recursiva
void listaInvertido (Pessoa pessoas[]){
    listaInvertidoRec(pessoas,TAM)
}
void listaInvertidoRec(Pessoa pessoas[], int N){
    if (N > 0){
        escrevaPessoa(pessoas[n-1]);
        listaInvertidoRec(pessoas,N-1);
    }
}