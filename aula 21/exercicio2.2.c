int lerNotas(int turma[],int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        printf("%i nota", i + 1);
        scanf("%i", &turma[i]);
        soma += turma[i];
    }
    return soma;
}

void mediaNotas(int turma[], int n, int soma){
    float media = soma/n;
    int acimaMedia = 0;
    printf("\n A media da turma eh: %d", media);
    for(int i = 0; i < n; i++){
        if(turma[i] > media){
            acimaMedia++;
        }
    }
    return acimaMedia;
}

void maiorMenorNota ( int turma[], int n){
    int maior = turma[0];
    int menor = turma [0];

    for(int i = 0; i < n; i++){
        if(turma[i] > maior){
            maior = turma [i];
        }
        if(turma[i] < menor){
            menor = turma[i];
        }
    }
    printf("\n A maior nota eh: %i, a menor nota eh %i", maior,menor);
}