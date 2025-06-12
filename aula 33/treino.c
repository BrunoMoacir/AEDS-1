typedef struct{
    char nome[50];
    float salario;
}Funcionario;
float mediaFuncionarios(Funcionario funcionarios[], int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma+=funcionarios[i].salario;
    }
    return soma/n;
}
int acimaMedia(Funcionario funcionarios[],int n, int media){
    int acimaMedia = 0;
    for(int i = 0; i < n; i++){
        if(funcionarios[i].salario > media){
            acimaMedia ++;
        }
    }
    return acimaMedia;
}

