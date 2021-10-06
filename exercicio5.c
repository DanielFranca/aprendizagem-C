#include <stdio.h>
#include <stdlib.h>

void main(){
    int cont;

    for(cont = 1; cont <= 10; cont++){
    printf("\n 5 X %d = %d", cont, 5 * cont);
    }
    for(cont = 10; cont <=20; cont = cont + 2){
    printf("\n %d", cont);
    }
    for(cont = 10; cont > 0; cont --){
    printf("\n%d", cont);
    }
}



