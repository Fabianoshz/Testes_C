#include <stdio.h>

int main() {

	int i, a, b, c;
	int o1, o2, o3; // Variáveis que irão guardar a ordem
					// Sendo 1 o maior e 3 o menor.

	printf("Por favor, escolha a opção de organização:");
	scanf("%d", &i);

	printf("Por favor, insira o valor A:");
	scanf("%d", &a);

	printf("Por favor, insira o valor B:");
	scanf("%d", &b);

	printf("Por favor, insira o valor C:");
	scanf("%d", &c);

	// Verificar se A é menor que B.
	if (a < b) { // Se A for menor que B

		if (a < c){ // Se A for menor que C.
			o3 = a; 
			if (b < c) { // Se B for menor que C.
				o2 = b;
				o1 = c;
			} else { // Se C for menor que B.
				o2 = c;
				o1 = b;
			}
		} else { // Se C for menor que A.
			o3 = c;
			o2 = a;
			o1 = b;
		}

	} else { // Se B for maior que A

		if (b < c){ // Se B for menor que C.
			o3 = b;
			if (a < c) { // Se A for menor que C.
				o2 = a;
				o1 = c;
			} else { // Se C for menor que A.
				o2 = c;
				o1 = a;
			}
		} else { // Se C for menor que A.
			o3 = c;
			o2 = b;
			o1 = a;
		}

	}

	if (i == 1) {
		printf("%d,%d,%d\n", o3,o2,o1);
	} else if (i == 2) {
		printf("%d,%d,%d\n", o1,o2,o3);
	} else {
		printf("%d,%d,%d\n", o3,o1,o2);
	}

	return 0;

}