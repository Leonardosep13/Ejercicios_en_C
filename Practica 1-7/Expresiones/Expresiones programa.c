#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=2, b=4, c=0;
	c=a*b/2;
	printf("%i\n",c);
	a=c%b+43;
	printf("%i\n",a);
	b=(a+c)*c/2;
	printf("%i\n",b);
	return 0;
}
