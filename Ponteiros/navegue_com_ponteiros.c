#include <stdlib.h>
#include <stdio.h>


void ir_para_sudeste(int *lat, int *lon){ // int lat e int lon passam a latitude e a longitude

	*lat = *lat -1; //latitude é o quao lone para o norte ou sul o jogador se encontra, lat-1 = sul, lat+1 = norte
	*lon = *lon +1;  // longitude é a sua posição para leste ou oeste , lon+1 = leste, lon-1=oeste

	}

int main ()
{
	int latitude = 32;
	int longitude = -64;

	ir_para_sudeste(&latitude, &longitude); // & passa o endereço de latitude e longitude para a função, ele vai diminuir 1 na latitude e somar 1 na longitude, vai para direita e para baixo
	ir_para_sudeste(&latitude, &longitude);
	ir_para_sudeste(&latitude, &longitude);
	ir_para_sudeste(&latitude, &longitude);

	printf("Avast! Agora em [%i,%i]\n", latitude, longitude); return 0;











}
