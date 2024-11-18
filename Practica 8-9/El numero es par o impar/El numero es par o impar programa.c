#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("ingrese un numero\n");
	scanf("%i",&num);
if (num%2==0)
   {printf("su numero es par\n");}
else
    {printf("su numero es impar\n");}
	return 0;
}
