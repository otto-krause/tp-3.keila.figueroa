#include <stdio.h>


int identificarMayor();

int main() {
	
	identificarMayor();
	
	return 0;
}


int identificarMayor() {
	int num1, num2;
	
	
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &num2);
	
	
	if (num1 > num2) {
		printf("El primer n�mero (%d) es mayor que el segundo n�mero (%d)\n", num1, num2);
	} else if (num2 > num1) {
		printf("El segundo n�mero (%d) es mayor que el primer n�mero (%d)\n", num2, num1);
	} else {
		printf("Ambos n�meros (%d) son iguales\n", num1);
	}
	
	
	return 0;
}
