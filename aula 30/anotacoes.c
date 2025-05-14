// escrever palavra ao contrario

// iterativo

void escreveInvertida(char* str){
    int n = strlen(str);
    for(int i = 0; i >= 0; i--){
        printf("%c", str[i]);
    }
}

// recursivo

void escreveInvertida (char*str)
{
    escreveInvertidaRec(str,strlen(str));
}
void escreveInvertidaRec (char* str, int n){
    if (n > 0){
        printf("%c", str[n-1]);
        escreveInvertidaRec(str,n-1);
    }
}

// ao descrever uma pessoa, substitua o dadorelativo à idade pela data de nascimento

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;
typedef struct {
    char nome[50];
    Data dataNascimento;
} Pessoa;
void cadastraPessoa (Pessoa pessoas[])
{
    printf("\nNome: ");
    fflush(stdin);
    fgets(pessoa[tam].nome,50,stdin);
    printf("\nData de nascimento: ");
    leiaData(&pessoas[TAM].dataNascimento);
    TAM++;
}

#defina MAX 10
int TAM = 0;
int main()
{
    Pessoa pessoas[MAX];
    int opcao;
    do{
        opcao = menu();
        switch (opcao){
            case 1:cadastraPessoa(pessoas);
            case
            case
        }
    }while (opcao != 0);
}