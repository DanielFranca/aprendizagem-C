#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int ladoA, ladoB, ladoC;
    printf("Insira os valores dos lados:");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
        if(ladoA == ladoB == ladoC){
            printf("Lados iguais fazer tri�ngulo");
        }
        else if(ladoA != ladoB){
            printf("Lados diferentes, imposs�vel fazer tri�ngulo");
        }




}
