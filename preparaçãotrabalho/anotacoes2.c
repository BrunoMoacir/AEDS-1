#define MAX_STR 50
#define MAX 100
int TAM = 0;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;
typedef struct{
    char nome[MAX_STR];
    Data datanascimento;
} Pessoa;

void escrevaPessoa(Pessoa PESSOAS[], int i){
    escrevaEstPessoa(PESSOAS[i]);
}

void escrevaEstPessoa(Pessoa PESSOA){
    printf("\n nome: %s", PESSOA.nome);
    printf("\n Data de nasciento: %d/%d/%d", 
    PESSOA.datanascimento.dia,
    PESSOA.datanascimento.mes,
    PESSOA.datanascimento.ano
);
}

void cadastrePessoa(Pessoa PESSOAS[]){
    fflush(stdin);// limpar 'cache'
    printf("\n Nome: ");
    fgets(PESSOAS[TAM].nome,MAX_STR,stdin);
    // estrutura padrão fgets: fgets(nome_do_vetor, tamanho_do_vetor, stdin);
    printf("\n Data de nascimento [dd/mm/aaaa]: ");
    scanf("%d/%d/%d",
    &PESSOAS[TAM].datanascimento.dia,
    &PESSOAS[TAM].datanascimento.mes,
    &PESSOAS[TAM].datanascimento.ano);
    TAM++
}