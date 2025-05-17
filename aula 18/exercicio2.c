void pesoM(int *altura, int* pesoIdeal){
    *pesoIdeal = (*altura - 100)-((*altura - 150)/4);
}

void pesoF(int* altura, int* pesoIdeal){
    *pesoIdeal = (*altura - 100)-((*altura-150)/2);
}

int main(){
    char *gen = malloc(sizeof(char));
    int *altura = malloc(sizeof(int));
    int *pesoIdeal = malloc(sizeof(int));

    printf("\n Informe seu genero [M/F]:\n");
    scanf("%c", gen);
    *gen = toupper(*gen);

    printf("\n Informe sua altura (em cm): ");
    scanf("%i", altura);

    if (gen == 'M'){
        pesoM(altura,pesoIdeal);
    } else{
        pesoF(altura, pesoIdeal);
    }

    printf("Seu peso ideal eh %i kg", *pesoIdeal);
    return 0;
}