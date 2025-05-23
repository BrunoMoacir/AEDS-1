// verificar se é palindromo ou nao
//iterativo
bool ehPalindromo(char* str){
    bool palindromo = true;
    int i = 0;
    int j = strlen(str)-1;
    while(palindromo && i<j){
        if(str[i]!=str[j])palindromo = false;
        i++;
        j--;
    }
    return palindromo;
}
// recursivo
bool ehPalindromoRec(char* str){

}
bool ehPalindromo(char* str, int i, int j){
    bool palindromo = true;
    if(i<j){
        if(str[i]!=str[j]) palindromo = false;
    }else{
        ehPalindromo(str,i + 1, j - 1);
    }
    return palindromo;
}