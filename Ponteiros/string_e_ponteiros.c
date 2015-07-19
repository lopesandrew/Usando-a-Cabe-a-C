#include <stdlib.h>
#include <stdio.h>


void biscoito_da_sorte(char msg[]){ //a função receberá um array de char 
	
	printf("Mensagem: %s",msg); // msg aponta para mensagem
	printf("A mensagem ocupa %i bytes\n", sizeof(msg)); // sizeof é apenas o tamanho do ponteiro, 8bytes em sistemas 64bits e 4 bytes em 32bits
		printf("A mensagem ocupa %i bytes\n", sizeof(citacao));

	}

int main()
{
	char citacao[] = "Bolacha te deixa gordo \n"; // a variavel citacao vai representar o endereço do primeiro caractere na string, a varivavel array é como um ponteiro 
	char citacao1[] = "Fruta te deixa saudável \n";
	biscoito_da_sorte(citacao); 
	biscoito_da_sorte(citacao1);
	
	printf("A string citação esta armazenada em: %p \n", citacao); // ""citacao"" pode ser usada como um ponteiro apesar de ser um array
	printf("A string citação esta armazenada em: %p \n", citacao1);

	
	
	printf("A mensagem ocupa %i bytes\n", sizeof(citacao));
	
	
	
	return 0 ; 
	
	
	
	
	
	
}
