#include <stdio.h>


float calcularResistenciaTotal(float r1, float r2, float r3, float r4, float r5);

int main() {
	float resistencia1, resistencia2, resistencia3, resistencia4, resistencia5, resistenciaTotal;
	
	printf("Ingrese la resistencia 1 (en ohmios): ");
	scanf("%f", &resistencia1);
	
	printf("Ingrese la resistencia 2 (en ohmios): ");
	scanf("%f", &resistencia2);
	
	printf("Ingrese la resistencia 3 (en ohmios): ");
	scanf("%f", &resistencia3);
	
	printf("Ingrese la resistencia 4 (en ohmios): ");
	scanf("%f", &resistencia4);
	
	printf("Ingrese la resistencia 5 (en ohmios): ");
	scanf("%f", &resistencia5);
	
	resistenciaTotal = calcularResistenciaTotal(resistencia1, resistencia2, resistencia3, resistencia4, resistencia5);
	
	printf("Resistencia 1: %.2f ohmios\n", resistencia1);
	printf("Resistencia 2: %.2f ohmios\n", resistencia2);
	printf("Resistencia 3: %.2f ohmios\n", resistencia3);
	printf("Resistencia 4: %.2f ohmios\n", resistencia4);
	printf("Resistencia 5: %.2f ohmios\n", resistencia5);
	printf("Resistencia Total: %.2f ohmios\n", resistenciaTotal);
	
	return 0;
}

float calcularResistenciaTotal(float r1, float r2, float r3, float r4, float r5) {
	return r1 + r2 + r3 + r4 + r5;
}
