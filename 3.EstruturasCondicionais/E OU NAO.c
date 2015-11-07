#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float media;
	int faltas;
	printf("..::: CONTROLE DE NOTAS E FALTAS :::..\n\n");
	printf("..::: INFORME A MEDIA :::..\n\n");
	scanf("%f",&media);
	printf("..::: INFORME A QUANTIDADE DE FALTAS :::..\n\n");
	scanf("%i",&faltas);
	if(media >= 7 && faltas < 40){
		printf("Aprovado");
		
	}else if(media < 7 && faltas > 40){
		printf("Reprovado por media: %f e faltas %i", media, faltas);
	}  
	
	if(media <7){
		printf("Reprovado por media: %f", media);
	}else if(faltas <7){
		printf("Reprovado por media: %f", faltas);
	}
	
	
	
	
	
	
	return 0;
}
