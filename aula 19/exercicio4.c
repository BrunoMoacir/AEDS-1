// contruir programa que leia 10 numeros reais e os armazene em um arquivo. Apos a leitura dos numeros o programa deve calcular e escrever a media e a quantidade de numeros maiores que a media

int main(){
    FILE *arquivo;
    float num, soma = 0, media;
    int maiorMedia = 0;
    int i;
    // criar/ abrir arquivo
    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL){
        printf("\n Erro ao criar o arquivo.");
        return 1;
    }
    //ler os numeros e colocar no arquivo
    printf("digite 10 numeros reais\n");
    for(int i = 0; i < 10; i++){
        scanf("%f", &num);
        fprintf(arquivo,"%.2f\n", num);
        soma += num;
    }
    fclose(arquivo);

    media = soma / 10;

    // reabrir arquivos para contagem de maiores q a media
    arquivo = fopen("numeros.txt","r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo para leitura.");
        return 1;
    }

    // contagem dos maiores
    for(i = 0; i < 10; i++){
        fscanf(arquivo,"f",&num);
        if(num > media){
            maiorMedia++;
        }
    }
    fclose(arquivo);

    arquivo = fopen("numeros.txt", "a");
    fprintf(arquivo, "\nMedia: %.2f\n", media);
    fprintf(arquivo, "Quantidade acima da media: %d\n", maiores_que_media);
    fclose(arquivo);

    printf("\nMedia: %.2f\n", media);
    printf("Quantidade acima da media: %d\n", maiores_que_media);

    return 0;
}