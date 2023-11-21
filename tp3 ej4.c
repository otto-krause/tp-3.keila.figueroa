#include <stdio.h>

float calcularPresion(float fuerza, float area);

int main() {
	float fuerza, area;
	
	printf("Ingrese la fuerza (en Newtons): ");
	scanf("%f", &fuerza);
	
	printf("Ingrese el área (en metros cuadrados): ");
	scanf("%f", &area);
	
	float presion = calcularPresion(fuerza, area);
	
	printf("La presión sobre la superficie es: %.2f Pascales (Pa)\n", presion);
	
	return 0;
}

float calcularPresion(float fuerza, float area) {
	return fuerza / area;
}
