#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int idade;
	printf("Informe sua idade");
	scanf("%d",&idade);
	char nome[20];

	printf("Informe seu nome");
	scanf("%c",&nome);
	
	printf("Seu nome é %c Sua idade e %d", nome, idade);
	system("Pause");
	return 0;
} 
