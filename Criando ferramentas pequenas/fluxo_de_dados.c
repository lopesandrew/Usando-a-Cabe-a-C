/*Quando um programa é executado, o sistema dá tres arquivos de fluxo de dados: 
* Entrada Padrao,a Saída Padrão e o Erro Padrão 
* 
* 
* 
* Cada fluxo de dados é repesentado por um ponteiro para um arquivo,
* e voce pode criar um novo fluxo de dados usando a função fopen()) */ 

#include <stdio.h>


int main()

{
	FILE *in_file = fopen("entrada.txt", "r"); // criação fluxo de dados para LER(r) um arquivo 
	
	FILE *out_file = fopen("saida.txt", "w"); //fluxo de dados para escrever um arquivo
	
	
	fprintf(out_file, "Não use %s com %s", "vermelho", "verde");
	
	fscanf(in_file, "%79[^\n]\n", sentence); 
	
	//apos ler os dados é necessario encerrar. 
	
	fclose(in_file);
	fclose(out_file);
	
	
	
	
	
	return 0; 
	
}
