#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include "data/data.h"
#include "pessoas/pessoas.h"

int main()
{
    Pessoa* pessoas[MAX]; // vetor de ponteiro para Pessoa
    abertura(pessoas);   // pega dados anteriores do arquivo
    char tipos[MAX];

    int opcao;
    do
    {
        // menu
        printf("\n==========Menu de funcionalidades, escolha uma opcao: =========\n");
        printf("0 - Sair do Programa\n");
        printf("1 - Cadastrar pessoa\n");
        printf("2 - Listar todas as pessoas cadastradas\n");
        printf("3 - Pesquisar por nome\n");
        printf("4 - Pesquisar por CPF\n");
        printf("5 - Excluir pessoa\n");
        printf("6 - Apagar todas as pessoas cadastradas\n");
        fflush(stdin);// limpa o buffer
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 0:
            printf("\nPrograma encerrado\n");
            despedida(pessoas);
            break;
        case 1:
            int tipo;
            cout << "\nCadastrar:\n1 - Aluno\n2 - Professor\nEscolha: ";
            cin >> tipo;
            cin.ignore();

            if (tipo == 1)
                pessoas[TAM] = new Aluno();
                tipos[TAM] = 'A';
            else{
                pessoas[TAM] = new Professor();
                tipos[TAM] ='P';
            }
            pessoas[TAM]->leiaPessoa();
            TAM++;
            break;
        }
        case 2:
            if (TAM == 0)
            {
                printf("\nNenhuma pessoa cadastrada!\n");
            }
            else
            {
                for(int i = 0; i < TAM; i++){
                    pessoas[i]->escrevePessoa();
                }
            }
            break;

        case 3:
            pesquisaPessoaNome(pessoas);
            break;

        case 4:
        {
            pesquisaPessoaCPF(pessoas);
            break;
        }
        case 5:
            deletaPessoa(pessoas);
            break;
        case 6:
            apagarTodos(pessoas);
            break;
        default:
            printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);



    return 0;
}
