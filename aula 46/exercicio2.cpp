// letra A iterativa

bool verificaChave(string a, char chave)
{
    bool ocorrencia = false;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == chave)
        {
            ocorrencia = true;
        }
    }
    return ocorrencia;
}
// letra B recursiva
bool verificaChave(string a, char chave, int i)
{
    if (a[i] == chave)
    {
        return true;
    }
    return verificaChave(a, chave, i + 1);
}
bool verificaChaveAux(string a, char chave)
{
    return verificaChave(a, chave, 0);
}
// exemplo de uso
int main()
{
    string texto;
    char letra;
    cout<<"digite a string:";
    cin>>texto;

    cout<<"digite a letra a ser procurada";
    cin>>letra;

    if(verificaChaveAux(texto, letra))
        cout<<"Letra encontrada";
    else
        cout<<"Letra nao encontrada";
}