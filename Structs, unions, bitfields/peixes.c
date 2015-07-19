#include <stdlib.h>
#include <stdio.h>


struct exercise{
	const char *description;
	float duration;
	}exercise; 

struct meal {
	const char *ingredients;
	float weight;
	}meal;


struct preferences {
	
	struct meal food;
	struct exercise exercise;
	
	
}preferences;

typedef struct fish {
	
	const char *name;
	const char *species; 
	int teeth;
	int age;
	struct preferences care; //struct dentro de outra struct  
} peixe;




void catalog(struct fish f)
{

	printf("%s is a %s with %i teeth. He is %i \n",
	f.name, f.species,f.teeth,f.age);


}


void label(struct fish a)
{
	printf("Name: %s\n Species: %s \n Teeth: %i \n %i years old\n ",
	a.name,a.species,a.teeth,a.age); 
	printf("Fed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",
	a.care.food.weight,a.care.food.ingredients,a.care.exercise.description,a.care.exercise.duration);
			
	
	
	
	
	}



int main(){
	
	peixe snappy = {"Snappy", "Piranhas", 69,4,{{"Meat",0.2},{"swin in the jacuzzi", 7.5}}}; 
	struct fish andrew = snappy;
	catalog(snappy);
	catalog(andrew); 
	label(snappy);	
	label(andrew); 
	
printf("%s", snappy.care.food.ingredients);
	
	return 0; 
	
	
	
	
	
	}
