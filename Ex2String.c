/*Escreva um algoritmo que receba uma String do usuário e imprima as letras das
posições ímpares*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string [10];

    printf("Digite uma palavra com ate 10 letras\n");
    scanf("%s",string);

    printf("As letras nas posicoe impares da string sao:\n ");
    for(int i=1; i<10; i+=2){
       printf("%c",string[i] );
    }

    return 0;
}
