#include <stdio.h>

int main(){
    int i,x;
    for (i = 15; i <= 90; i++)
    {
        if (i%4==0){
            x = i * i;
            printf("%d ",x);
        }
    }
    
    return 0;
}