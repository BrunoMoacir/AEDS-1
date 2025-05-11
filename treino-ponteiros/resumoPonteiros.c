// PONTEIROS RESUMO COMPLETO PARA FIXAR

int *ptr; // ptr é um ponteiro que pode armazenar o endereço de uma variável do tipo int
          // ele não guarda diretamente um número, mas sim o endereço de memória em que esse numero(inteiro) esta representado
*ptr; // lê-se "conteudo armazenado por ptr"
      // representa o VALOR armazenado no endereço
    EXEMPLO
    int x = 10;
    int *ptr = &x;
    printf("%d", *ptr)// imprime 10

ptr; // endereço da variavel para qual o ponteiro esta apontado
    // ou seja, ptr contem um endereço de memoria
    // printf("%p", ptr) imprime o endereço de memoria
&ptr; // endereço do proprio ponteiro na memoria