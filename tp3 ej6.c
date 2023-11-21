#include <stdio.h>


int obtenerOctavaParte();

int main() {
	
	obtenerOctavaParte();
	
	return 0;
}


int obtenerOctavaParte() {
	int valor, octavaParte;
	
	
	printf("Ingrese un valor entero: ");
	scanf("%d", &valor);
	
	
	octavaParte = valor / 8;
	
	
	printf("La 8va parte de %d es: %d\n", valor, octavaParte);
	
	
	return 0;
}
