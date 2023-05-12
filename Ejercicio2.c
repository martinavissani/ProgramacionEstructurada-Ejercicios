#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int j;
	
	printf("TABLAS DE MULTIPLICAR  ");
	
	for(i = 1; i <= 10; i++) {
		printf("TABLA DEL: %d  ", i);
		for(j = 1; j <= 10; j++) {
			printf("%d * %d = %d  ", i, j, i*j);
		}
	}
}
