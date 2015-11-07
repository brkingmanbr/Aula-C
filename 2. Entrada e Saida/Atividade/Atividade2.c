#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	float nota1, nota2, nota3, media;

	printf("Informe a 1a nota\n");
	scanf("%f",&nota1);

	printf("Informe a 2a nota\n");
	scanf("%f",&nota2);

	printf("Informe a 3a nota\n");
	scanf("%f",&nota3);

	media = (nota1 + nota2 + nota3)/3;

	if(media >= 7){
	    printf("Voce foi aprovado com media %2.2f", media);
	}else{
	printf("Voce foi reprovado com media %2.2f", media);
	}
	system("Pause");
	return 0;
}
