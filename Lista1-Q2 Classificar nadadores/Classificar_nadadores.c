// Objetivo: Receber e classificar 
// nadadores de acordo com a idade.

#include <stdio.h>
int main() {

	int i;

	printf("Por favor, digite a idade:\n");
	scanf("%d", &i);	// '%d' diz que esperamos receber um
						// dígito e que iremos guardar-lo na 
						// variável i.

	if (i >= 5) {

		// Repare que primeiro é checado se o valor é
		// igual ou maior que 5, se o mesmo for, não
		// será necessário chegar no próximo if se o valor
		// está entre 5 e 7 e assim em diante.

		if (i <= 7) {
			printf("Infantil A.\n");
		} else if (i <= 10 ) {
			printf("Infantil B.\n");
		} else if (i <= 13 ) {
			printf("Juvenil A.\n");
		} else if (i <= 17 ) {
			printf("Juvenil B.\n");
		} else {
			printf("Adulto.\n");
		}

	} else {

		// Se o valor recebido for menor que 5, este
		// nadador não poderá ser classificado.

		printf("Não classificado.");
	}

	return 0;
}