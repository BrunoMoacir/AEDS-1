 typedef serve para criar um apelido (nome mais simples) para a struct. Assim, você não precisa mais escrever struct Pessoa, só o nome que você deu.

 Exemplo com typedef:

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

// CODIGO COMPLETO
#include <stdio.h>  
// Inclui a biblioteca padrão de entrada e saída (para usar printf, scanf, fgets, etc.)

// Define um novo tipo chamado "Pessoa" usando typedef + struct
typedef struct {
    char nome[50];   // Campo do tipo vetor de caracteres (string) com até 49 letras + '\0'
    int idade;       // Campo inteiro para armazenar a idade da pessoa
} Pessoa;
// Agora você pode usar o nome "Pessoa" diretamente para declarar variáveis

int main() {
    Pessoa p;  // Declara uma variável "p" do tipo Pessoa

    printf("Digite o nome: ");
    fgets(p.nome, 50, stdin);  
    // Lê uma linha do teclado e armazena no campo "nome" da struct "p"
    // fgets é usada aqui para aceitar espaços no nome

    printf("Digite a idade: ");
    scanf("%d", &p.idade);  
    // Lê a idade digitada pelo usuário e armazena no campo "idade" da struct "p"

    printf("Nome: %sIdade: %d\n", p.nome, p.idade);  
    // Imprime os dados armazenados na struct "p"
    // %s mostra a string (nome), %d mostra o inteiro (idade)

    return 0;  
    // Fim do programa
}
