#include <stdio.h>
#include <string.h> 

void procura_musica(char procurar_por[]){ //procurar por recebe a string que deverá ser procurada dentro da string
	
	int i;
	for(i=0; i<5;i++){
		if(strstr(tracks[i], procurar_por))
			printf("Música %i: '%s'\n", i,tracks[i]);
	
	
	}
	
	}

int main(){
char tracks[][80] = { // 80 é o tamanho do titulo das musicas 
	"I left my heart in Harvard Med Scholl", // cada sttring é um array, entao é um array de arrays. 
	"Newark, Newarek - a wonderful town", 
	"Dancing with a Dork",
	"The girl from Iwo Jima",
	}; // o primeiro par de [] é para o array de todas as strings, o segundo par de [] é usdao para cada string individual



strstr("dysfunctional", "fun"); // a função encontrara a string "fun", começando aqui na posição 3, ela procura uma segunda string dentro da primeira string
//se nao conseguir encontrar o valor ela retorna 0

char s0[] = "Dysfunctional"; 
char s1[] = "ab"; 

if(strstr(s0,s1)) // se existir fun em dysfunctional 
{
	puts("I found the fun in dysfuntional!\n"); 
}else puts("Not found\n"); 

return 0; 

}
