#include <stdio.h>

int ingresarNumero();
int mostrarNumeroSeparado(int numero);

int main() {
	int numero1, numero2;
	
	printf("Ingrese el primer número: ");
	numero1 = ingresarNumero();
	
	printf("Ingrese el segundo número: ");
	numero2 = ingresarNumero();
	
	printf("Números ingresados en líneas separadas:\n");
	mostrarNumeroSeparado(numero1);
	mostrarNumeroSeparado(numero2);
	
	return 0;
}

int ingresarNumero() {
	int numero;
	scanf("%d", &numero);
	return numero;
}

int mostrarNumeroSeparado(int numero) {
	printf("%d\n", numero);
	return numero;
}
