#include <stdio.h>
#include <string.h>
#define TAM 10

int main(){
    char s[TAM];
    int cont = 0;
    int *pcont = &cont;
    char *p = s;

    fgets(s,TAM,stdin);
    s[strcspn(s, "\n")] = '\0';

    while (*p != '\0')
    {
        (*pcont)++;
        p++;
    }
    
    printf(" o tamnho é %d",*pcont);

    return 0;
}