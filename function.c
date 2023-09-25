/******************************************************************************
21/06/2021
Aline Carvalho Corrêa
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
int main()
{   
    char entradaUser;
    int resultadoFuncoesStr;
    printf("Insira um caractere: \n");
    scanf("%s", &entradaUser);
    
    resultadoFuncoesStr = isdigit(entradaUser);
    printf("isdigit: %d\n", resultadoFuncoesStr);
    resultadoFuncoesStr = isalpha(entradaUser);
    printf("isalpha: %d\n", resultadoFuncoesStr);
    resultadoFuncoesStr = isalnum(entradaUser);
    printf("isalnum: %d\n", resultadoFuncoesStr);
    resultadoFuncoesStr = islower(entradaUser);
    printf("islower: %d\n", resultadoFuncoesStr);
    resultadoFuncoesStr = isupper(entradaUser);
    printf("isupper: %d\n", resultadoFuncoesStr);
    entradaUser = tolower(entradaUser);
    printf("tolower: %s\n", &entradaUser);
    

    return 0;
}
