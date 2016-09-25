// Dados 3 números, apresenta-los em ordem crescente
#include <stdio.h>
int main() {

	int a;
	int b;
	int c;

	printf("Por favor, digite um número A:");
	scanf("%d", &a); // Guardar o valor recebido na variável A.
	
	printf("Por favor, digite um número B:");
	scanf("%d", &b); // Guardar o valor recebido na variável B.

	printf("Por favor, digite um número C:");
	scanf("%d", &c); // Guardar o valor recebido na variável C.

	// Verificar se A é menor que B.
	if (a < b) { // Se A for menor que B
		
		if (a < c){ // Se A for menor que C.
			
			printf("%d,", a); // Como já verificamos que A é menor que B e C, podemos imprimir o A.
			
			if (b < c) { // Se B for menor que C.

				printf("%d,", b); // Como B é menor, ele deve ir antes.
				printf("%d\n", c); // Por fim, imprimimos o C.
			
			} else { // Se C for menor que B.

				printf("%d,", c); // Como C é menor, ele deve ir antes.
				printf("%d\n", b); // Por fim, imprimimos o B.

			}

		} else { // Se C for menor que A.
			printf("%d,", c); // Sabemos que C é menor que A, que por sua vez é menor que B.
			printf("%d,", a); // Como já sabemos que A é menor que B.
			printf("%d\n", b); // Por fim, imprimimos B.
		}

	} else { // Se B for maior que A
		
		if (b < c){ // Se B for menor que C.
			
			printf("%d,", b); // Como já verificamos que B é menor que A e C, podemos imprimir o B.
			
			if (a < c) { // Se A for menor que C.

				printf("%d,", a); // Como A é menor, ele deve ir antes.
				printf("%d\n", c); // Por fim, imprimimos o C.
			
			} else { // Se C for menor que A.

				printf("%d,", c); // Como C é menor, ele deve ir antes.
				printf("%d\n", a); // Por fim, imprimimos o A.

			}

		} else { // Se C for menor que A.
			printf("%d,", c); // Sabemos que C é menor que A, que por sua vez é menor que B.
			printf("%d,", b); // Como já sabemos que B é menor que A.
			printf("%d\n", a); // Por fim, imprimimos A.
		}

	}

	return 0;
}