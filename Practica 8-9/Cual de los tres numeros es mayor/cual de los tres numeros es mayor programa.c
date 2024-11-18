#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int n1, n2, n3, mayor;
    printf("Introduzca su primer numero\n");
    scanf( "%d",&n1 );
    printf("introduzca su segundo numero\n");
    scanf( "%d",&n2 );
    printf("Introduzca su tercer numero\n");
    scanf( "%d",&n3 );
if (n1>n2)
    if (n1>n3)
        mayor=n1;
    else
        mayor=n3;
else
    if (n2>n3)
     mayor=n2;
       else
        mayor=n3;
    printf("%d es el mayor",mayor);
	return 0;
}
