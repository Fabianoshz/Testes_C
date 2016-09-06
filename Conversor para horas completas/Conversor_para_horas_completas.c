#include <stdio.h>
int main() {

	int s;

	printf("Por favor, digite os segundos:");
	scanf("%d", &s); // Guardar o valor recebido na variável s.

	int seg = s%60;
	printf("%d\n", seg); // Imprimir os segundos.

	int m = s/60;
	int min = m%60;
	printf("%d\n", min); // Imprimir os minutos.

	int h = m/60;
	printf("%d\n", h); // Imprimir as horas.

	return 0;
}