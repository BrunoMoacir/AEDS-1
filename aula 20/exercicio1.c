void criarArquivo(char nome[100]){// recebe como parametro o nome do arquivo que sera criado

    FILE *arquivo = fopen(nome,"w");// cria um ponteiro para arquivo, abre ou cria o arquivo no modo escrita
    float valor = 1; // inicializa com qqr valor diferente de 0

    printf("Digite valores reais (0 para encerrar):\n");
    while(valor != 0){
        scanf("%f", &valor);
        if(valor != 0){
            fprintf(arquivo,%f\n,valor);// quando o valor é diferente de zero, ele é gravado no arquivo usando fprintf
        }
        }
    }

