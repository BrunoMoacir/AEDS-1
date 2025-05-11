#include <stdio.h>  // Importa funções de entrada e saída, como printf e fgets

int main() {
    char str[50];  // Declara um vetor de caracteres (string) com até 49 letras + '\0' (fim da string)

    printf("\n nome: ");  // Imprime "nome: " na tela (o \n apenas pula uma linha antes)

    // Lê uma linha inteira (até 49 caracteres ou até o ENTER) do teclado e armazena em 'str'
    // fgets evita problemas de segurança e de estouro que scanf pode ter com strings
    fgets(str, 50, stdin);  // (onde guardar, tamanho máximo, de onde ler)
    // estrutura padrão fgets: fgets(nome_do_vetor, tamanho_do_vetor, stdin);


    // Imprime a string lida com uma quebra de linha antes
    printf("\n%s", str);  // %s diz ao printf que ele deve imprimir uma string (vetor de caracteres)

    return 0;  // Finaliza o programa com sucesso
}

// char str[50]; // esse é o trem de ferro, ele vai de 0 a 49, não use mais que isso.

// se vc digitar dentro dessa str só "puc" vai ficar mais ou menos assim: str = {"puc",/0};