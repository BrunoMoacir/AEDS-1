class Data
{
    private:
    int dia;
    int mes;
    int ano;

    public:
    bool setDia(int dia)
    {
        bool sucesso = false;
        if(dia >=1 && dia<=31){
            this->dia = dia;
            sucesso = true;
        }
        return sucesso;
    }
    void escreveData()
    {
        printf("\n%i/%i/%i", dia,mes,ano);
    }

    void leiaData()
    {
        printf("\ndd/mm/aaaa");
        scanf("%i/%i/%i", &dia,&mes,&ano);
    }
}