#include <stdio.h>

int main(){
    int jose = 150;
    int pedro = 110;
    int anos = 0;

    while (pedro <= jose) {
        jose += 2;   
        pedro += 3;  
        anos++;
    }

    printf("Pedro sera maior que Jose em %d anos.\n", anos);
    printf("Altura final de Pedro: %d cm\n", pedro);
    printf("Altura final de Jose: %d cm\n", jose);

    
    
    return 0;
}