int* quadrado(int *p){
    int* armazena = malloc(sizeof(float));
    *armazena = (*p)*(*p);
    return armazena;
}