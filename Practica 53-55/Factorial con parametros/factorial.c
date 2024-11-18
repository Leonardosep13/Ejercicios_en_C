#include <stdio.h>
#include <stdlib.h>

int fa(int n);

int main(int argc, char *argv[]) {
	int num;
	printf("Ingrese un numero para sacar su factorial\n");
	scanf("%i",&num);
	num=fa(num);
	printf("%i",num);
	return 0;
}

int fa(int n){
	int fac;
	fac=n-1;
	do{
        n=n*fac;
        fac--;}
    while (fac>1);
    return n;
}
