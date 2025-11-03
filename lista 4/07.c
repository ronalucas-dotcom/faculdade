#include <stdio.h>
#include <string.h>
#define TAM 10

int main(){
    char s[TAM];
    char t[TAM];
    char *ps = s;
    char *pt = t;

    printf("digite a primeira string");
    fgets(s,TAM,stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("digite a segunda string");
    fgets(t,TAM,stdin);
    t[strcspn(t, "\n")] = '\0';

    while (*ps != '\0')
    {
        ps++;
    }

    while (*pt !='\0')
    {
        *ps = *pt;
        ps++;
        pt++;

    }

    *ps = '\0';

    printf(" a string junta ficou: %s",s);
    
    
    return 0;
}