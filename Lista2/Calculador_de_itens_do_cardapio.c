#include <stdio.h>

int main() {

	int cod, q;
	float v;

	printf("Por favor, insira o código do produto:");
	scanf("%d", &cod);

	printf("Por favor, insira a quantidade:");
	scanf("%d", &q);

	if (cod = 100) {
		v = 3.5;
	} else if (cod = 101) {
		v = 4.5;
	} else if (cod = 102) {
		v = 5.2;
	} else if (cod = 103) {
		v = 3;
	} else if (cod = 104) {
		v = 4;
	} else {
		v = 2.5;
	}

	printf("O valor do seu pedido é: %.2f reais\n", v * q);

	return 0;

}