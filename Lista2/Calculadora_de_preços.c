#include <stdio.h>

int main() {

	float p;

	printf("Por favor, digite o preço do produto:");
	scanf("%f", &p); // Guardar o valor recebido na variÃ¡vel p.

	float pagvista = p * 0.9;
	float pagparcelado5 = p / 5;
	float pagparcelado10 = (p * 1.2) / 10;

	printf("Pagamento a vista: %f \n", pagvista);
	printf("Pagamento parcelado em 5x sem juros: %f \n", pagparcelado5);
	printf("Pagamento parcelado em 10x com juros: %f \n", pagparcelado10);

	return 0;

}
