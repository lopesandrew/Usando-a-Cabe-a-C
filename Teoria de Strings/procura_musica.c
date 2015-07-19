#include <stdio.h>
#include <string.h> 


char tracks[][80] = { // 80 é o tamanho do titulo das musicas 
	"I left my heart in Harvard Med Scholl", // cada sttring é um array, entao é um array de arrays. 
	"Newark, Newarek - a wonderful town", 
	"Dancing with a Dork",
	"The girl from Iwo Jima",
	}; // o primeiro par de  é para o array de todas as strings, o segundo par de [] é usdao para cada string individual
	
	
void procura_musica(char procurar_por[]){ //procurar por recebe a string que deverá ser procurada dentro da string
	
	int i;
	for(i=0; i<5;i++){
		if(strstr(tracks[i], procurar_por)){
			printf("Música %i: '%s'\n", i,tracks[i]);
	}
	
	}
	
	}
	
	
int main(){
    char procurar_por[80];
	printf("Procurar por: \n");
    scanf("%79s", procurar_por);	
	procura_musica(procurar_por); 
	
	return 0; 
	
	}
