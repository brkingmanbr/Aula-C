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
	void strlow ( algo );
	
}

void strlow ( char string[] ){
	int i = 0;
	   while ( string[i] )  /* While not at the end of the string yet (marked by 0).  */
	   {
		  string[i] = tolower( string[i] );
		  ++i;
	   }
	printf("Em minusculas : %s\n", string);
}