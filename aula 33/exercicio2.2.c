typedef struct{
    char nomes[50];
    float salario;
}Funcionario;
float mediaFuncionarios(Funcionario funcionarios[], int n){
    float soma = 0;
    
    for(int i = 0; i < n; i ++){
        soma += funcionarios[i].salario;
    }
    return soma / n
}
int salarioAcimaMedia(Funcionario funcionarios[],int n, float media){
    int salarioAcima = 0;
    for(int i = 0; i < n; i++){
        if(funcionarios[i].salario > media){
            salarioAcima ++;
        }
    }
    return salarioAcima;
}