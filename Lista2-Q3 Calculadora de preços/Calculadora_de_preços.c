#include <stdio.h>

int main() {

	float p;

	printf("Por favor, digite o preço do produto:");
	scanf("%f", &p); // Guardar o valor recebido na variável p.

	float pagvista = p - (p * 0.1);
	float pagparcelado5 = p / 5;
	float pagparcelado20 = ((p * 0.2) + p ) / 20;

	printf("Pagamento a vista: %f \n", pagvista);
	printf("Pagamento parcelado em 5x sem juros: %f \n", pagparcelado5);
	printf("Pagamento parcelado em 20x com juros: %f \n", pagparcelado20);

	return 0;

}