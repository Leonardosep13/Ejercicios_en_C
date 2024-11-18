#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,mult,res;
	num=7;
	mult=1;
	do{
		res=num*mult;
		printf("%i\n",res);
		mult++;
	}
	while(10>=mult);
	return 0;
}
