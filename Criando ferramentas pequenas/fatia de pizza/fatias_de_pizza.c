#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])

{
	char *delivery = "";
	int thick = 0;
	int count = 0;
	
	char ch;
	
	
	while ((ch=getopt(argc, argv,"d:t"))!=EOF) //d é seguido por 2 pontos por ele recebe um parametro
		switch(ch)
{
			case 'd':
				delivery=optarg; //vamos atribuir a delivery o parametro fornecido com a op. 'd'
				break;
			case 't':
				thick=1; //atribuir 'verdade' a thick
				break;
		default:
			fprintf(stderr,"Opção desconhecida: %s\n\n",optarg);
			return 1 ; 
	
}

argc -= optind;
argv += optind;

if (thick)
	puts("Thick crust\n");

if (delivery[0])
	printf("Para ser entrege %s\n\n",delivery);

puts("Ingredientes: \n");

for (count = 0;count <argc;count++)
	puts(argv[count]);
	
	return 0; 
	
}
