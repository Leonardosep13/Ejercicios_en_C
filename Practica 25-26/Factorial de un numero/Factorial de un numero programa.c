#include <stdio.h>
#include <stdlib.h>

int fact(int n,int f){
	    
		do{
        n=n*f;
        f--;}
    while (f>1);
    return n;
}




int main(int argc, char *argv[]) {
    
	int num,fac;
    
	printf("ingrese un numero para convertirlo a factorial\n");
    scanf("%i",&num);
    fac=num-1;
    num=fact(num,fac);
    printf("su factorial es %i\n",num);
    
    return 0;
    }
