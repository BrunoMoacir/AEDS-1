class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    char *mesExtenso();
    bool dataValida();
    void setData(int, int, int);
};
string Data::mesExtenso()
{
    string mes = " ";
    string extenso[] = {"janeiro", "fevereiro", "dezenbro"};
    if (dataValida())
        mes = extenso[(this->mes - 1)];
    return mes;
}
bool Data::dataValida()
{
    bool valida = true;
    if (this->dia < 0 || this->dia > 31)
        valida = false;
    else if (this->mes < 0 || this->mes > 12)
        valida = false;
    return valida;
}
void Data::setData(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
int main()
{
    cout << "Testando classes e objetos";
    Data data1;
    data1.setData(4, 6, 2025);
    cout << "\nMes atual: "
         << data1.mesExtenso();
    Data data2;
    data2.setData(4, 13, 2025);
    cout << "\nMes atual: "
         << data2.mesExtenso();
    return 0
}
