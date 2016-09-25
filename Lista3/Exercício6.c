#include <stdio.h>

int main()
{
	int n, i;

	printf("Por favor, insira um número real menor do que 19:\n");
	scanf("%d", &n);

	if (n > 18) {
		printf("Valor inválido.\n");
	} else {

		printf("\nResultado:\n");

		for (i=1;i<100;i++) {

			if ((i / 10) + (i % 10) == n) {
				printf("%d\n", i);
			}

		}

	}

}
