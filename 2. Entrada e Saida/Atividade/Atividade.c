#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int idade;
int dias;
printf("Informe sua idade");
scanf("%i",&idade);
dias = idade * 365;
printf("A quantidade de dias que voce ja viveu são %i", dias);
return 0;
}
