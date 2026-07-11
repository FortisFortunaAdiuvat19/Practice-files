
#include <stdio.h>

int loop(char c, char *text){
    char *nchar;
    for(int i = 0; text[i]; i++){
        nchar[i] = c ^ text[i];
    };
   
    printf("%s",text);
    printf("%s",nchar);
    return 0;
};


int main (){

    printf("This works");
    
    return 0;
};