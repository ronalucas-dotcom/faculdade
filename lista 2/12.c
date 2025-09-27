#include <stdio.h>

int main(){
    int i,x,res;
    puts("quer a tabuada de que numero ?");
    scanf("%d",&x);
    for (i =1;i<=10;i++){
        res = x * i;
        printf("%d x %d = %d\n",x,i,res);
        
    }

    return 0;
}