#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float sumaNotas, promedioCurso, nota;
	int minAlumno, maxAlumno;
	float promedioAlumno = 0;
	float sumaPromedios = 0;
	float menorPromedio = 11;
	float mayorPromedio = 0;
	int i, j;
	
	for(i = 1; i <= 4; i++) {
		sumaNotas = 0;
		
		for(j = 1; j <= 3; j++) {
			printf("Ingrese la nota del alumno %d: ", i);
			scanf("%f", &nota);
			sumaNotas = sumaNotas + nota;
		}
		
	promedioAlumno = sumaNotas / 3;
	printf("El promedio del alumno es: %.2f. \n", promedioAlumno);
	printf("\n");
	
	if (promedioAlumno > mayorPromedio) {
		mayorPromedio = promedioAlumno;
		maxAlumno = i;
	}
	
	if (promedioAlumno < menorPromedio) {
		menorPromedio = promedioAlumno;
		minAlumno = i;
	}
	
	sumaPromedios = sumaPromedios + promedioAlumno;
}

promedioCurso = sumaPromedios / 4;

printf("El promedio del curso es de %.2f puntos. \n", promedioCurso);

printf("El alumno %d tiene el menor promedio con %.2f puntos. \n", minAlumno, menorPromedio);

printf("El alumno %d tiene el mayor promedio con %.2f puntos. \n", maxAlumno, mayorPromedio);	
}
