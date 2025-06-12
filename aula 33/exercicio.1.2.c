typedef struct{
    char nome[MAX];
    int idade;
}Pessoa;

float verificaPessoa(char str1[], char str2){
    bool iguais = true;
    int i = 0;
    while (str1[i]!= '\0' || str[2]!='\0'){
        if(str1[i] != str2[i]){
iguais = false;
        }
        i++;
    }
    return iguais;
}

bool verificaPessoa(Pessoa p1, Pessoa p2){
    bool iguais = true;
    
}