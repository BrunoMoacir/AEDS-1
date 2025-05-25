typedef struct{
    int ano;
    char time[100];
}campeonatoBrasileiro;

int verificaVezesCampeao(campeonatoBrasileiro brasil[TAM], char* chave){
    int vezesCampeao = 0;
    for(int i = 0; i < TAM; i++){
        if(strcmp(brasil[i].time,chave)==0){
            vezesCampeao++;
        }
    }
    return vezesCampeao;
}

// versao sem strcmp
int verificaVezesCampeao(campeonatoBrasileiro brasil[TAM],char* chave){
    int count = 0;
    for(int i = 0; i<TAM;i++){
        if(brasil[i].time == chave[i]){
            count ++;
        }
    }
    return count;
}
// VERSAO ITERATIVA
int verificaTitulos(campeonatoBrasileiro brasil[TAM], char* chave,int i,int count){
    int count = 0;
    if (i < TAM){
        if (brasil[i].time == chave[i]){
            return verificaTitulos(brasil,chave,i+1,count+1 );
        }else{
            return verificaTitulos(brasil,chave,i+1,count);
        }
    }
}