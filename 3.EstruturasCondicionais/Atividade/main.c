#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade;
	printf("Digite a sua idade\n");
	scanf("%i",idade);
	if(idade >= 0 && idade < 18){
		printf("Não possui habilitação");
	}else if(idade >= 18 && idade < 65){
		printf("Renove seu exame a cada 5 anos!!");
	}else if(idade >= 65){
		printf("Renove seu exame a cada 3 anos!!");
	}	
	return 0;
}
