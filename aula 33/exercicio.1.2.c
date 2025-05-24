typedef struct{
    char nome[50];
    int idade;
}Pessoa;
bool comparaPessoas(Pessoa pessoas1, Pessoa pessoas2){
    bool iguais = true;
    if (pessoas1.idade != pessoas2.idade){
        iguais = false;
    }
    for(int i = 0; pessoas1.nome[i] != '\0' || pessoas2.nome[i]!='\0'; i++){
        if(pessoas1.nome[i] != pessoas2.nome[i]){
            iguais = false;
        }
    }
    return iguais;
}
typedef struct{
    char nome[50];
    int idade;
}Pessoa;
bool comparaPessoas(Pessoa pessoas1, Pessoa pessoas2){
    bool igual = true;
    if (pessoas1.idade != pessoas2.idade){
        igual= false;
    }
    if (strcmp(pessoas1.nome, pessoas2.nome) != 0){
        igual= false;
    }
    return igual;
}