// construa uma funcao que receba um vetor de pessoas e calcule e retorne a maior idade da turma
typedef struct{
    char nome[50];
    int idade;
}Pessoa;
// iterativo
float maiorIdade(Pessoa pessoas[],int n){
    int maior = 0;
    for(int i = 0; i < n; i++){
        if(pessoas[i].idade > maior){
            maior = pessoas[i].idade;
        }
    }
    return maior;
}





// recursivo
int maiorIdade(Pessoa pessoas,int n){
    
}