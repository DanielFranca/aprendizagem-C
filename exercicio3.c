#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale (LC_ALL, "");

float valor1, valor2;
int opcao;


    printf("digite o primeiro valor:");
    scanf("%f", &valor1);
    printf("digite o segundo valor:");
    scanf("%f", &valor2);

    printf("Escolha uma opção:");
    printf("\n-Somar");
    printf("\n-Subtrair");
    printf("\n-Dividir");
    printf("\n-Multiplicar");
    scanf("%d", &opcao);
    switch(opcao)
{
    case 1:
        printf("Resultado da soma: %f", valor1 + valor2);
        break;
    case 2:
        printf("Resultado da subtração: %f", valor1 - valor2);
        break;
    case 3:
        printf("Resultado da divisão: %f", valor1 / valor2);
        break;
    case 4:
        printf("Resultado da multiplicação: %f", valor1 * valor2);
        break;
    default:
        printf("Opção Inválida");
        break;
}






}
