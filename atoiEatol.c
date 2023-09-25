/******************************************************************************
21/06/2021
Aline Carvalho Corrêa
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
 
int main(void){
char numero[100];

printf("Digite um numero: ");
scanf("%s",numero);
 
printf("string = %s \n", numero );
printf("int atoi = %d \n", atoi(numero) );
printf("int atol = %ld \n", atol(numero) );
 
return 0;
}
