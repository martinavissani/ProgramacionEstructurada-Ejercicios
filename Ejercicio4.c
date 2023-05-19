#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sumaNota = 0, cantidadNotas = 0, promedioAlumno, mejorProm1, mejorProm2, mejorProm3, aux1, aux2, promedioCurso, sumaPromedio, contadorAlumnos;
	char respuesta = 's';
	int nota = 1;
	
	while (respuesta == 's') {
		sumaNota = 0;
		cantidadNotas = 0; 
		
		while (nota != 0) {
		printf("Ingrese la nota del alumno: ");
		scanf("%d", &nota);
		
		do {
			printf("Desea ingresar otra nota para el alumno (S/N)");
			scanf(".%c", &respuesta);
	    
		if (nota != 0) {
			sumaNota += nota;
			cantidadNotas++; 
		}
		}
		
		promedioAlumno = sumaNota / cantidadNotas;
		printf("El promedio del alumno es %d", promedioAlumno);
		contadorAlumnos++;
		sumaPromedio += promedioAlumno;
		}
		
	promedioCurso = sumaPromedio / contadorAlumnos;	
	printf("El promedio del curso es %d", promedioCurso);
}
}
