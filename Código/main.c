#include <stdio.h>
#include <stdlib.h>

/* Programa para Convers�o de Temperatura*/
#include <stdio.h>
/*Fun��o Auxiliar*/
float converter(float c)
{
    float t2;
    /*Definindo minha variavel convertida*/

    t2=1.8*c+32;
    return t2;
}
int main()
{
    float t1;
    float t2;
    /*Definindo meus valores de temperatura*/
    printf("Digite a temperatura em Celsius:\n");
    /*Buscando um input via teclado com o valor de t1*/
    scanf("%f",&t1);
    t2=converter(t1);
    printf("O valor em Farenheit �: %.2f F",t2);
    return 0;
}
