#define MAX 100

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

Pessoa pessoas[MAX];
int TAM = 0;




// cadastrar pessoas

void cadastroPessoa(){
    printf("\n Nome:");
    fgets(pessoas[TAM].nome,50,stdin);
    
    printf("\n Idade:");
    scanf("%i", &idade);
    TAM ++;
}

// listar pessoas
void listarPessoas(){
    for(int i = 0; i < TAM; i++){
        printf("\n Nome:%s", pessoas[i].nome);
        printf("\n idade: %i", idade);
    }
}
// calculo media das idades

void mediaIdades(){
    if (TAM == 0){
        printf("Nenhuma pessoa cadastrada.\n");
        return;
    }

    int soma = 0;
    for (int i = 0; i < TAM; i++){
        soma += idade;
        }
        float media = soma / TAM;
        printf("idade media da turma: %f", media);
}
    int main() {
        int opcao;

        do {
            printf("\n--- MENU ---\n");
            printf("1 - Cadastrar pessoa\n");
            printf("2 - Listar pessoas\n");
            printf("3 - Média de idades\n");
            printf("0 - Sair\n");
            printf("Escolha: ");
            scanf("%d", &opcao);
            getchar(); // limpa o enter

            switch (opcao) {
                case 1:
                    cadastrarPessoa();
                    break;
                case 2:
                    listarPessoas();
                    break;
                case 3:
                    mediaIdades();
                    break;
                case 0:
                    printf("Saindo...\n");
                    break;
                default:
                    printf("Opção inválida!\n");
            }
        } while (opcao != 0);

        return 0;
    }