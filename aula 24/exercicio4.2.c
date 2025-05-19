// iterativo

void lerVogais (char vogais[][100], int n){
    for(int i = 0; i < n; i ++){
        contador = 0;
        for(int j = 0; str[i][j] != '/0'; j++){
            char c = vogais[i][j];
            if (c == 'a'|| c == 'e'|| c == 'i' || c == 'o' || c == 'u' ){
            contador ++;
            }
        }
        printf("string %d tem %d vogais\n", i+1, contador);
    }
}

// recursivo

void lerVogais (char vogais[][100], int n, int i)