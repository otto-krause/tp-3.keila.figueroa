#include <stdio.h>

float calcularPerimetro(float a, float b);
float calcularArea(float a, float b);

int main() {
	float a, b;
	
	printf("Ingrese la longitud del lado 'a' del rectángulo: ");
	scanf("%f", &a);
	
	printf("Ingrese la longitud del lado 'b' del rectángulo: ");
	scanf("%f", &b);
	
	float perimetro = calcularPerimetro(a, b);
	float area = calcularArea(a, b);
	
	printf("El perímetro del rectángulo es: %.2f\n", perimetro);
	printf("El área del rectángulo es: %.2f\n", area);
	
	return 0;
}

float calcularPerimetro(float a, float b) {
	return 2 * (a + b);
}

float calcularArea(float a, float b) {
	return a * b;
}
