// funcao que receba uma string e uma letra, deve retornar o numero de ocorrencias da letra naquela string
// iterativo

int somaOcorrencias(string texto, char letra){
    int contador = 0;
    for(int i = 0; i < texto.lenght(); i++){
        if(texto[i] == letra){
            contador++;
        }
    }
    return contador;
}
// recursiva
int somaOcorrencias(string texto, char letra, int i){
    if(i >= texto.lenght()){
        return 0;
    }
    if(texto[i] == letra){
        return 1 + somaOcorrencias(texto, letra, i + 1);
    }else{
        return somaOcorrencias(texto, letra,i+1);
    }
}
// numero aleatorio em c++
int main(){
    srand (time(0));
    int x = rand() % 11;// limita entre 0 e 10
    cout<<"numero: "<<x;
}
// construa uma funcao que receba uma matriz quadrada de reais e dois valores inteiros, relativos a linha e coluna a funcao devera verificar se a linha parametrizada é igual a coluna ou nao
bool linhaIgualColuna(float matriz[][5], int n, int l, int c){
    for(int i = 0; i < n; i++){
        if(matriz[l][i] != matriz[i][c]){
            return false;
        }
    }
    return true;
}
// recursivo
bool linhaIgualColuna(float matriz[][5], int n,int l, int c, int i){
    if(n == i){
        return true;
    }
    if(matriz[l][i] != matriz[i][c]){
        return false;
    }
    return linhaIgualColuna(matriz[][5],n,l,c,i+1);
}
bool verificaZero(float matriz[10]){
    bool zero = false;
    for(int i = 0; i < 10; i++){
        if(matriz[i] == 0){
            zero = true;
        }
    }
    return zero;
}