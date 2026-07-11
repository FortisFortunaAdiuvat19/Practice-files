#define KEY 'X';
#define CLEARTEXT 'A';

#include <stdio.h>

void printchar(char c, char *text){
    printf("%s = '%c' (0x%x) \n", text, c, c);
};

int main (){
    char cleartext, key, encryptedtext, newcleartext;
    
    cleartext = CLEARTEXT;
    printchar(cleartext, "cleartext");

    key = KEY;
    printchar(key,"key");

    encryptedtext = key ^ cleartext;
    printchar(encryptedtext , "encryptedtext");

    newcleartext = encryptedtext ^ key;
    printchar(newcleartext, "newcleartext");
    
    return 0;
};