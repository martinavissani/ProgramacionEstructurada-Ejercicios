#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int num;
	int promedio = 1;
	int suma = 0;
	int producto = 1;
	int prom1;
	float prom2;
	
	for (i = 1; i <= 3; i++) {
		printf("Ingrese un nro: ");
		scanf("%d", &num);
		suma = suma + num;
		producto = producto * num;
	}
	
	prom1 = suma / 3;
	prom2 = suma / 3;
	
	printf("La suma es: %d.", suma);
	printf("El producto es: %d.", producto);
}
