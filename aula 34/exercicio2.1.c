typedef struct{
    int ano;
    char campeao[100];
}CampeonatoBrasileiro;
int verificaVezesCampeao (CampeonatoBrasileiro verifica, char* time){
    int countCampeao = 0;
    for(int i = 0; i < TAM; i++){
        if (strcmp(verifica[i].campeao,time)==0){
            countCampeao++;
        }
    }
    return countCampeao;
}
// recursiva
