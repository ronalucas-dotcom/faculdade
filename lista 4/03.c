#include <stdio.h>

int main(){
    int menor,x,primeiro = 1;
    int *px = &x;
    int *pmenor = &menor;

    while (1)
    {

        puts("digite o numero");
        scanf("%d",px);
        if (*px == 0)
        {
            break;
        }
        if (primeiro)
        {
            *pmenor = *px;
            primeiro = 0;

        }
        else {
            if (*pmenor>*px)
            {
                *pmenor = *px;
            }
            
        }
        
        printf("o menor numero digitado foi %d \n", *pmenor);
        
        
    }
    printf("o menor numero digitado foi %d \n", *pmenor);
    
    return 0;
}