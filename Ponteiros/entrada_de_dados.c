#include <stdlib.h>
#include <stdio.h>

int main()

{
	char name[40];
	printf("Digite seu nome: \n");
	scanf("%39s", name); //scanf vai ler até 39 caracteres mais o final de strign \0; 
	
	int idade; 
	printf("Digite sua idade: \n");
	scanf("%i", &idade); // use & para pegar i endereço do int, %i significa que o usuário vai digitar um valor int
	
	
	// Você pode usar scanf para escrever mais que uma informação de uma vez: 
	
	char primeiro_nome[40];
	char sobrenome[40];
	
	printf("Digite seu primero nome e o sobrenome: "); 
	scanf("%19s %19s", primeiro_nome, sobrenome); // scanf irá gravar o que for digitado em primeiro_nome até que seja pressionado espaço, assim como sobrenome
	printf("Primeiro: %s Sobrenome: %s \n", primeiro_nome, sobrenome); 

	return 0; 
	
	
	
}
