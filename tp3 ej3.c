#include <stdio.h>

float calcularPorcentaje(int total, int cantidad);

int main() {
	int hombres, mujeres;
	
	printf("Ingrese la cantidad de hombres que se han postulado: ");
	scanf("%d", &hombres);
	
	printf("Ingrese la cantidad de mujeres que se han postulado: ");
	scanf("%d", &mujeres);
	
	int totalPostulantes = hombres + mujeres;
	
	float porcentajeHombres = calcularPorcentaje(totalPostulantes, hombres);
	float porcentajeMujeres = calcularPorcentaje(totalPostulantes, mujeres);
	
	printf("Porcentaje de hombres que se han postulado: %.2f%%\n", porcentajeHombres);
	printf("Porcentaje de mujeres que se han postulado: %.2f%%\n", porcentajeMujeres);
	
	return 0;
}

float calcularPorcentaje(int total, int cantidad) {
	return ((float)cantidad / total) * 100;
}
