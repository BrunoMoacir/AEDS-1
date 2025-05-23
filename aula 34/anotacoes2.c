// descobrir se a palavra é palindromo

bool ehPalindromo(char* str){
    bool palindromo = true;
    int i = 0;
    int j = strlen(str)-1;
    while(palindromo && i<j){
        if(str[i] != str[j])palindromo = false;
        i++;
        j--;
    }
    return palindromo;
}
// recursiva
bool ehPalindromoRec(char* str){
    return ehPalindromoRec2(str,0,strlen(str)-1);
}
bool ehPalindromoRec2(char* str,int i,int i){
    bool palindromo = true;
    if(i<j){
        if(str[i]!=str[j])palindromo = false;
    }else{
        palindromo = ehPalindromo(str,i+1,j-1)
    }
    return palindromo;
}