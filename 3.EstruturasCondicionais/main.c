#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int idade, tempohabilitado;
	
	printf("Informe sua idade: \n");
	scanf("%i",&idade);
	
	
	
	if(idade > 18){
		tempohabilitado = idade - 18;
		printf("Voce ja que tem %i e maior de idade e já possui a carteira a %i anos", idade, tempohabilitado);	
	}else{
		tempohabilitado = 18 - idade;
		printf("Voce ja que tem %i e maior de idade e faltam-lhe %i anos para poder ser habilitado", idade, tempohabilitado);	
	}	
	return 0;
}
