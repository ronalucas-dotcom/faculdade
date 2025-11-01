#include <stdio.h>
#define TAM 10

int main(){
    int i,ent = 0;
    char x;
    char s[TAM];

    fgets(s,TAM,stdin);
    fflush(stdin);
    
    scanf("%c",&x);

    for ( i = 0; i < TAM; i++)
    {
        if (s[i]== x){
            ent = 1;
            break;
        }
        
    }
    if (ent)
        printf("O caractere '%c' ESTA presente na string \"%s\".\n", x, s);
    else
        printf("O caractere '%c' NAO foi encontrado na string \"%s\".\n", x, s);

    

    return 0;
}