#include <stdio.h>
#include <string.h> 


void inverter(char *s){
	
	size_t len = strlen(s);
	
	char *t = s      +  len     - 1 ; 
	
	while( t >= s  ){
		printf("%c", *t);
		t = t-1; 
	}
	
	puts(""); 
	
	}

int main()

{
	char *juices[]={
		"dragonfruit", "waterberry", "sharonfruit", "uglifruit","rumberry","kiwifruit",
		"mulberry", "strawberry", "blueberry","starfruit"
	};
	
	char *a; //1
	puts(juices[6]); //2 imprime mulberry
	inverter(juices[7]); //2 inverte strawberry
	a = juices[2]; //2 sharonfruit
	juices[8] = a; //2 
	puts(juices[8]);
	inverter(juices[(18+7)/5]); //verticais
	puts(juices[2]);
	inverter(juices[9]);
	juices[1] = juices[3]; 
	puts(juices[10]);
	inverter(juices[1]);
	return 0; 
	
	



}
