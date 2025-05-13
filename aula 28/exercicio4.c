void escritaInvertida(char str[]){
    int tamanho = 0;

    while (str[tamanho != '\0']){
        tamanho ++;
    }

    for (int i = tamanho; i >= '\0'; i--){
        printf("%c", str[i]);
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, 100, stdin);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == '\n') palavra[i] = '\0';
    }

    printf("String invertida: ");
    escreverInvertido(palavra);

    return 0;
}