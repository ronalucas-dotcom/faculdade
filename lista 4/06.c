#include <stdio.h>
#include <string.h>
#define TAM 10

int main(){
    char s[TAM];
    char t[TAM];
    char *ps = s;
    char *pt = t;

    printf("digite a string: ");
    fgets(s,TAM,stdin);
    s[strcspn(s, "\n")] = '\0';

    while (*ps != '\0')
    {
        *pt = *ps;
        ps++;
        pt++;

    }

    *pt = '\0';

    printf(" string clone : %s ", t);
    

    return 0;
}