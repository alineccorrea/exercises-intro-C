/******************************************************************************
21/06/2021
Aline Carvalho Corrêa
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
 
int main(void){
char numero[100];
long atolTeste;
int atoiTeste;

printf("Digite um numero: ");
scanf("%s", numero);
 
printf("string = %s \n", numero);
atolTeste = atol(numero);
atoiTeste = atoi(numero);
printf("int atoi = %d \n", atoiTeste);
printf("long atol = %ld \n", atolTeste);
atolTeste = atolTeste * 2;
atoiTeste = atoiTeste * 2;
printf("int atoi * 2 = %d \n", atoiTeste);
printf("long atol * 2 = %ld \n", atolTeste);

 
return 0;
}
