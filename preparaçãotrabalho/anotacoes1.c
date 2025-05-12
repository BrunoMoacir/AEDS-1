#include <locale.h>
#define MAX_STR 50
const int MAX = 100; // pode cadastrar ate 100 pessoas
int TAM = 0;// variavel global que indica quantas pessoas foram cadastradas ate agora
typedef struct{
    char nome [MAX_STR];
    int idade;
}Pessoa;

int main()
{
    setlocale(LC_ALL,"");// acentos/cedilha
    abertura();
    Pessoa PESSOAS[MAX];// cria um vetor de 100 estruturas do tipo Pessoa, em que cada posicao pode guardar um nome e uma idade
}

// cadastrando uma pessoa

void cadastrePessoa(pessoa PESSOAS[])
{
    fflush(stdin);//Essa linha limpa o buffer de entrada do teclado.
    printf("\nNome:");
    fgest(PESSOAS[TAM].nome, Max_str,stdin)
    // estrutura padrão fgets: fgets(nome_do_vetor, tamanho_do_vetor, stdin);
    str[strcspn(str,"\n")]='\0';

    printf("\nIdade: ");
    scanf("%i", &PESSOAS[TAM].idade);

    TAM++;
}

// ESCREVENDO UMA PESSOA

void escrevePessoa(Pessoa PESSOAS[], int i){
    printf("\nNome: %s", PESSOAS[i].nome);

    printf("\nIdade: %i", PESSOAS[i].idade);
}

// LISTANDO AS PESSOAS

void listaPessoas(Pessoa PESSOAS[]){
    for (int i = 0; i < TAM; i++){
        escrevePessoa(PESSOAS, i);
    }
}

// MENU DE OPÇÕES

int menu (){
int OPCAO;
bool ERRO;
do{
    printf("\n\nMenu de opções");
    printf("\n\t0 - SAIR");
    printf("\n\t1 - Cadastrar Pessoa");
    printf("\n\t2 - Listar pessoas");
    printf("\nSua Opção: ");
    scanf("%i", &OPCAO);
    ERRO = OPCAO < 0 || OPCAO > 2;
    if (ERRO)printf("\n Resposta inválida");
    }while(ERRO);
    return OPCAO;
}

// gerenciando tamanho logico em arquivo

void abreArquivoTamanho(){
    FILE* arqTamanho = fopen("tamanho.dat","r");

    if (arqTamanho == NULL){
        arqTamanho = fopen("tamanho.dat", "w");
        TAM = 0;
        fprintf(arqTamanho,"%i", TAM);
    } else{
        fscanf(arqTamanho,"%i", &TAM);
    }
    fclose(arqTamanho);
}

// gravando pessoas no arquivo

void gravaPessoas (Pessoa PESSOAS[]){
    FILE* arqPessoas=fopen("pessoas.dat","w");
    fwrite(PESSOAS,sizeof(Pessoa),TAM,arqPessoas); // grava os dados do vetor PESSOAS no arquivo
    fclose(arqPessoas);

    FILE* arqTamanho = fopen("tamanho.dat","w");
    fprintf(arqTamanho,"%i",TAM);// atualiza o arquivo com o novo total de registros
    fclose(arqTamanho);
}

// carregando pessoas do arquivo

void carregaPessoas(Pessoa PESSOAS[]){
    FILE* arqPessoas = fopen("pessoas.dat", "r+");

    if (arqPessoas==NULL){
        arqPessoas=fopen("pessoas.dat","w+");
    }
    fread(PESSOAS,sizeof(Pessoa),TAM,arqPessoas);// fread é usada para ler blocos de dados de um arquivo binario.
}

// possivel funcao principal 

int main() {
setlocale(LC_ALL, "");
abertura();
Pessoa PESSOAS[MAX];
abreArquivoTamanho();
carregaPessoas(PESSOAS);
int OPCAO;
do{ OPCAO = menu();
switch(OPCAO){
case 0 : despedida();
gravaPessoas(PESSOAS);
break;
case 1 : cadastrePessoa(PESSOAS);
break;
case 2 : listaPessoas(PESSOAS);
break;
default: printf("\n\aOpção inválida");
}
} while(OPCAO!=0);
return 0;
}
