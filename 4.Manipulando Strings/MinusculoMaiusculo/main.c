#include <stdio.h>
#include <ctype.h>

void strup ( char string[] );

void main(int argc, char **argv)
{
	char algo[20]; 
	
	printf("\nEntre com a string :"); 
	scanf("%[^\n]s", &algo); 
	printf("\n"); 
	printf("string digitada : %s\n",algo); 
	printf("\n"); 
	strup(algo);
	
}

void strup ( char string[] ){
	int i = 0;
	   while ( string[i] ){
		  string[i] = toupper( string[i] );
		  ++i;
	   }
	printf("Em maiúsculas : %s\n", string);
}