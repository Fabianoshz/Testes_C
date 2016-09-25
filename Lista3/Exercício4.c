#include <stdio.h>

int main()
{
	int n, i, pos, neg, pos_valor;

	pos_valor = 0;
	pos = 0;
	neg = 0;

	for (i=1;i<=5;i++) {

		printf("Por favor, insira um número real:\n");
		scanf("%d", &n);

		if (n >= 0){
			pos += 1;
			pos_valor += n;
		} else {
			neg += 1;
		}

	}

	printf("Média dos valores positivos: %.2f\n", (float)pos_valor / pos);
	printf("Quantidade de vlaores negativos: %d\n", neg);

}
