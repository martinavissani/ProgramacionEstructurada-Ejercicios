#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	int sumaNotas, promedioAlumno = 0, promedioCurso, sumaPromedios = 0;
	int nota;
	int mayorPromedio, menorPromedio, maxAlumno = 0, minAlumno = 11;
	
	for(i = 1; i <= 4; i++) {
		sumaNotas = 0;
		
		for(j = 1; j <= 3; j++) {
			printf("Ingrese la nota del alumno %d: ", i);
			scanf("%d", &nota);
			sumaNotas = sumaNotas + nota;
		}
		
	promedioAlumno = sumaNotas / 3;
	printf("El promedio del alumno es: %d.", promedioAlumno);
	
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
printf("El promedio del curso es: %d. ", promedioCurso);

printf("El alumno %d tiene el menor promedio con %d puntos. ", minAlumno, menorPromedio);

printf("El alumno %d tiene el mayor promedio con %d puntos. ", maxAlumno, mayorPromedio);	
}

