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
printf("int = %f \n", atof(numero) );
 
return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   float valor;
   char str[20];
   
    printf("Insira uma frase: \n");
    scanf("%s", &str);
    
   valor = atof(str);
   printf("Frase: %s\n Valor Float: %f\n", str, valor);

   return(0);
}