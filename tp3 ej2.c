#include <stdio.h>

float calcularPerimetro(float a, float b);
float calcularArea(float a, float b);

int main() {
	float a, b;
	
	printf("Ingrese la longitud del lado 'a' del rect�ngulo: ");
	scanf("%f", &a);
	
	printf("Ingrese la longitud del lado 'b' del rect�ngulo: ");
	scanf("%f", &b);
	
	float perimetro = calcularPerimetro(a, b);
	float area = calcularArea(a, b);
	
	printf("El per�metro del rect�ngulo es: %.2f\n", perimetro);
	printf("El �rea del rect�ngulo es: %.2f\n", area);
	
	return 0;
}

float calcularPerimetro(float a, float b) {
	return 2 * (a + b);
}

float calcularArea(float a, float b) {
	return a * b;
}
