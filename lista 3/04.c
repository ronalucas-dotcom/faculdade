#include <stdio.h>
#include <string.h>
#define TAM 10

int main(){
    char s[TAM];
    int ok;
    char t[TAM];

    printf("Digite a primeira string: ");
    fgets(s,TAM,stdin);
    fflush(stdin);
    
    printf("Digite a segunda string: ");
    fgets(t,TAM,stdin);
    fflush(stdin);

    ok = strcmp(s,t);

    if (ok == 0)
    {
        puts("são iguais");
    }
    else{
        puts("não são iguais");
    }

    return 0;
}