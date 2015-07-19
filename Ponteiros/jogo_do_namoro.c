#include <stdlib.h>
#include <stdio.h>

int main()

{
	int participantes[]= {1,2,3}; 
	int *escolha = participantes; 
	
	participantes[0] = 2; // {2,2,3}
	participantes[1] = participantes[2]; //{2,3,3}
	participantes[2] = *escolha ; //{2,3,1}
	
	
	printf("Eu vou escolher o participante de numero: %i\n", participantes[2]); // = 2
	
	return 0; 
	
	
	
	
}
