bool ehPalindromo(string s){
    bool palindromo = false;
    int i = 0;
    int j = s.length() -1;
    while(i > j){
        if (s[i] != s[j]){
            palindromo = false;
        }
        i++;
        j--;
    }
    return palindromo;
}
bool ehPalindromo(string s, int i, int j){
    if(i < j){
        if(s[i] == s[i]){
            return 1 + ehPalindromoAux(s,i+1, j-1);
        }
    }
    return ehPalindromoAux(s,i+1,j-1);
}
bool ehPalindromoAux(string s){
    return ehPalindromo(s,0,s.length()-1);
}