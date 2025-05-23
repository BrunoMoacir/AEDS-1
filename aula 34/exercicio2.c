typedef struct{
    int ano;
    char campeao[100];
}CampeonatoBrasileiro;
int verificaVezesCampeao(CampeonatoBrasileiro brasileiro, char pesquisa, int TAM){
    int vezesCampeao = 0;
    for(int i = 0; i < TAM; i++){
        if(strcmp(brasileiro[i].campeao,pesquisa)==0){
            vezesCampeao ++;
        }
    }
    return vezesCampeao;
}
// recursiva
typedef struct{
    int ano;
    char campeao[100];
}CampeonatoBrasileiro;

int verificaCampeao(CampeonatoBrasileiro brasileiro,char pesquisa, int TAM){
    
}