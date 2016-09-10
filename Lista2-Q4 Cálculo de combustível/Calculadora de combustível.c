#include <stdio.h>

int main() {

	int kmp, kml;
	float p;

	printf("Por favor, insira quilômetros do percurso:");
	scanf("%d", &kmp); // Guardar o valor recebido na variável kmp.

	printf("Por favor, insira quantos quilômetros o carro faz por litro:");
	scanf("%d", &kml); // Guardar o valor recebido na variável kml.

	printf("Por favor, digite o preço do combustível:");
	scanf("%f", &p); // Guardar o valor recebido na variável p.

	float cc = kmp / kml; // Realizando o cálculo de combustível consumido.
	
	float ct = cc * p; // Para descobrirmos o valor gasto, basta multiplicar
					   // o combustível consumido pelo valor do combustível.

	printf("A quantidade de combustível usada foi: %f \n", cc);
	printf("O valor usado com combustível foi: %f \n", ct);

	return 0;

}