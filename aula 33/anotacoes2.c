// funcao que receba um vetor real e um valor x a ser inserido na posicao i do vetor. Para que ele possa ser inserido sem impacto, antes dainserção os valores a partir da posicao deverao ser deslocados uma posicao a direita, tamamnho do vetor = tam

bool insiraVetor(float A[], float X, int posicao){
    bool sucesso = false;
    if(TAM < MAX){
        shiftMais1(A,posicao)
            A[posicao] = X;
            TAM ++;
            sucesso = true;
    }

    return sucesso;
}
// iterativo
void shiftMais1(float A[], int posicao){
    if(posicao >= 0 && posicao <= TAM && TAM<MAX){
        for(int i = TAM; i>posicao;i--){
            A[i] = A[i-1];
        }
    }
}
// recursivo
void shiftMais1(float A[], int posicao){
    shiftMais1Rec(A, posicao, TAM);
}
void shiftMais1Rec(float A[],int posicao, int frente){
    if (posicao >= 0 && posicao <= TAM && TAM<MAX && frente>0 && frente <=TAM+1){
        if(frente>posicao){
            A[frente] = A[frente-1];
            shiftMais1Rec(A,posicao,frente-1);
        }
    }
}