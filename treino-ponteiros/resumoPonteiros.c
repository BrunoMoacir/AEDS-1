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
            //como qualquer variavel, o ponteiro tambem tem um endereço
            // exemplo: printf("%p", &p)// imprime o endereço em que o ponteiro esta armazenado
        &x; // endereço da variavel x
            // é o que voce atribui a um ponteiro para que ele aponte para X

            EXEMPLO GERAL
            int x = 42;
            int *ptr = x
            *ptr; // imprime 42
            ptr; // imprime o endereço de X
            &ptr; // endereço do ponteiro ptr

            QUANDO USAR * DEPOIS DA VIRGULA NO PRINTF?
            // É usado * quando quer acessar o VALOR ACESSADO POR UM PONTEIRO, ou seja, o conteudo do endereço de memoria para que ele aponta
            // Não é obrigado usar * sempre, so quando você quer o valor da variavel guardada no ponteiro
            APOS IGUALAR O PONTEIRO AO X:
            // se escrever printf("%p", ptr) voce imprime o endereço guardado no ponteiro
            // se escrever printf("%p", %ptr) voce imprime o conteudo que esta nesse endereço

            RESUMO RAPIDO
            SITUAÇÃO                                    ||                O QUE USAR
            imprimir o valor que aponta                                 *ptr
            imprimir endereço guardado no ponteiro                       ptr
            fazer o ponteiro apontar para uma variavel                  ptr = &x