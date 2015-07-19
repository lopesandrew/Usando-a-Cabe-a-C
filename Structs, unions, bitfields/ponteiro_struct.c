#include <stdlib.h>
#include <stdio.h> 


typedef struct{
	
	const char *name; 
	const char *species;
	int age;
	
	}turtle;

void happy_birthday(turtle *t){
	
	 t->age= (*t).age+1; // t->age == (*t).age)
	printf("Feliz aniversario %s! Agora voce tem %i anos!\n\n",
		(*t).name,(*t).age); 
	
	
	}

int main(){
	
	
	turtle myrtle = {"Myrtle","Cagado",99};
	happy_birthday(&myrtle);
	printf("%s agora tem %i anos \n",
		myrtle.name,myrtle.age);
	return 0; 
	
	
	
	}
