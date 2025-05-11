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

            Situação comentada (feito por uso de IA)
            
                int main() {
                    int a = 5, b = 10;
                    int *ptr1, *ptr2;

                    // Passo 1: ptr1 agora guarda o endereço de 'a'
                    ptr1 = &a;

                    // Passo 2: ptr2 agora guarda o endereço de 'b'
                    ptr2 = &b;

                    // Passo 3: Soma os valores apontados (5 + 10) e armazena em 'a' (a = 15)
                    a = *ptr1 + *ptr2;

                    // Passo 4: Modifica 'b' via ptr2 (10 * 2 = 20)
                    *ptr2 = *ptr2 * 2;

                    // Passo 5: Troca os ponteiros:
                    // ptr1 agora aponta para 'b' e ptr2 para 'a'
                    int *temp = ptr1;
                    ptr1 = ptr2;
                    ptr2 = temp;

                    printf("a = %d, b = %d\n", a, b);               // a = 15, b = 20
                    printf("*ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2); // *ptr1 = 20, *ptr2 = 15
                    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);   // ptr1 = endereço de b, ptr2 = endereço de a

                    return 0;

                    Saída Esperada (exemplo):
                        a = 15, b = 20
                        *ptr1 = 20, *ptr2 = 15
                        ptr1 = 0x7ffd42a1a8, ptr2 = 0x7ffd42a1a4

                    