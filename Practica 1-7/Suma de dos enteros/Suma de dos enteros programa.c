#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Suma de dos enteros
int main(int argc, char *argv[]) {
	int n1,n2,res;
	printf("Dame dos enteros\n");
	scanf("%i%i",&n1,&n2);
	res=n1+n2;
	printf("El resultado de %i+%i es:%i\n",n1,n2,res);
	return 0;
}
