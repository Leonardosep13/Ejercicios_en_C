#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int tab,cont,res;
	
	printf("Cual es la tabla de multiplicar que desea visualizar?\n");
	scanf("%i",&tab);
	
	for(cont=1;cont<=10;cont++){
		res=tab*cont;
		printf("%ix%i=%i\n",tab,cont,res);
	}
	
	return 0;
}
