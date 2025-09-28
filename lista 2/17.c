#include <stdio.h>
int main(){
    int c;
    float f;
    for (c = 10; c <= 100; c+=10)
    {
        f = (9 * c) / 5.0 + 32;
        printf("%d c = %.1f f\n",c,f);
    }
    
    return 0;
}