#include <stdio.h>

int main(){
    int x,y;
    puts("o primeiro numero");
    scanf("%d",&x);
    puts("o segundo numero");
    scanf("%d",&y);
    (x%y)?puts("e não édivisivel"):puts("é divisivel");

    return 0;
}