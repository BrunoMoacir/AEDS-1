void concatenaString(char* str1, char* str2, char* str3){
    int i = 0;
    while(str1[i] != '\0'){
        str3[i]=str1[i];
        i++;
    }
    int j = 0;
    while(str2[j]!= '\0'){
        str3[j] = str2[j];
        j++
    }
    for(int k = 0; k < i; k++){
        printf("%c", str3[k]);
    }
}
