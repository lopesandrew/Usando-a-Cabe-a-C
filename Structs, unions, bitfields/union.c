#include <stdlib.h>
#include <stdio.h> 

// Um union vai usar o espaço de apenas um dos campos na sa definição. 
//Unions sao usados frequentemente com structs 
//voce pode acessar is valores na combinação struct/union usando a notação
//de ponto  ou -> 
typedef union {
	
	short count; 
	float weight;
	float volume; // cada campos será armazenado no mesmo espaço de memória 
	
	
	
	
}quantity ;

typedef struct{
	
	const char *name; 
	const char *country; 
	quantity amount; 
	
	
	
}fruit_order; 

int main (){
	
	
	fruit_order apples = {"apples", "England", .amount.weight = 5.1}; 
	fruit_order melao = {"melao", "Brazil", .amount.weight = 1};
	
	printf("This orders cointains %2.2f lbs of %s \n", apples.amount.weight,apples.name); 
	printf("This orders cointains %f of %s and %2.2f lbs", melao.amount.volume, melao.name, melao.amount.volume);
	printf("\nHello\n");
	
	return 0; 
	}
