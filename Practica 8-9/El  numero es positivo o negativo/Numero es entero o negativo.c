
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1;
	printf("ingrese su numero\n");
	scanf("%i",&n1);
	if (n1>0)
	  {printf("Su numero es positivo\n");}
	else
	  {printf("Su numero es negativo\n");}
	return 0;
}
