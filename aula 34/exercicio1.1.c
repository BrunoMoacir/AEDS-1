bool ehPalindromo(char* str){
    bool palindromo = true;
    int i = 0;
    int j = strlen(str)-1;
    while(palindromo && i < j){
        if(str[i] != str[j]) palindromo = false;
        i++;
        j--;
    }
    return palindromo;
}
// recursivo
bool ehPalindromo(char* str){
    return ehPalindromo2(str,0,strlen(str)-1;)
}


bool ehPalindromo2(char* str, int i, int j){
    bool palindromo = true;
    if (i < j){
        if( str[i] != str[j]) palindromo = false; 
    }else{
        palindromo = ehPalindromo2(str,i+1,j-1);
    }
    return palindromo;
}