#include <stdio.h>
#include <stdlib.h>


int y = 1; /* y mora na parte GLOBAL, valor 1*/

int  main()
{
	int x = 4; /* x mora no stack, valor 4*/
	
	printf("O endereço de x e: %p em formato HEXADECIAMAL (base 16) \n", &x); /* % é usado para formatar endereços, &x é o endereço de x*/
	
	/* o endereço da variavel diz onde encontrar a variavel na memoria. Por isso que um endereço tambem se chama PONTEIRO, 
	porque ele aponta para a variável na memória*/
	
	return 0; 
}
