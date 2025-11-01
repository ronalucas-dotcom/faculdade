#include <stdio.h>
#define TAM 20
int main(){
    char s[TAM];
    int cont = 0,i = 0;

    fgets(s,TAM,stdin);

    while (s[i] != '\0' && s[i] != '\n')
    {
        cont++;
        i++;
    }
    
    
    printf("numero de carac: %d",cont);

    return 0;
}