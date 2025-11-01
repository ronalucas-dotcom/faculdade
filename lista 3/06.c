#include <stdio.h>
#include <string.h>
#define TAM 10

int main(){
    char s[TAM];
    int i;

    printf("digite a string: ");
    fgets(s,TAM,stdin);
    s[strcspn(s, "\n")] = '\0';

    for ( i = strlen(s)-1; i >=0; i--)
    {
        printf("%c",s[i]);
    }
    
    printf("\n");

    return 0;
}