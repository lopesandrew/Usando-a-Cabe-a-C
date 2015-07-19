#include <stdio.h>
#include <stdlib.h>



	typedef struct {
	float tank_capacity;
	int tank_psi;
	const char *suit_material;
}equipament;
	

typedef struct scuba{
	const char *name;
	equipament kit;
	}diver;

void badge( diver d){
	
	printf("Nome: %s Tank: %2.2fL(%iPSI) Suit: %s\n",
			d.name,d.kit.tank_capacity,d.kit.tank_psi,d.kit.suit_material);
	
	}

int main() 

{

	
	diver andrew = {"Andrew", {5.5,3500,"Neoprene"}};
	badge(andrew);
	return 0; 
	
	printf("%s", andrew.name);
	



}
