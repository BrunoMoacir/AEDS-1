// para saber se uma string e igual a outra

bool stringIgual(char M[], char N[])
{
    int i = 0;
    while (M[i] != '\0' || N[I] != '\0')
    {
        if (M[i] != N[i])
        {
            return false;
        }
        i++;
    }
    return M[i] == N[i];
}
// atividade

typedef struct
{
    char nome[100];
    float salario;
} Funcionario;

float calculoMediaSalario(Funcionario funcionarios[], int n)
{
    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += funcionarios[i].salario;
    }
    return soma / n;
}
float salarioAcimaMedia(Funcionario funcionarios[], int n, float media)
{
    int somatorio = 0;
    for (int i = 0; i < n; i++)
    {
        if (funcionarios[i].salario > media)
        {
            somatorio++;
        }
    }
    return somatorio
}
float funcionariosAcimaMedia(Funcionario funcionarios[], int n)
{
    float media = calculoMediaSalario(funcionarios, n);
    return funcionariosAcimaMedia(funcionarios, n, media);
}