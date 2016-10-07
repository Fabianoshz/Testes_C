#include <stdio.h>

int main()
{
	int n, y, i, m;

	printf("Por favor, insira um número inteiro delimitador:\n");
	scanf("%d", &n);
	printf("Agora insira o valor a ser calculado:\n");
	scanf("%d", &y);

	if (n > y) {

		printf("\nResultado: \n");

		// Aqui nós definimos o i (iterador) como 0. Também definimos a variável m como 0.
		// Definimos que a condição para que o código do for rode é que i seja menor ou igual do que n (i <= n)
		// O que torna o nosso for mais rápido é que dizemos: i é igual a m vezes y, sendo que m aumenta de
		// 1 em 1 a cada vez que o código roda.
		// Nosso i será incrementado de acordo com o valor a ser calculado. Ou seja, para n=30 e y=10:
		// i = 0(m) * 10(y) - i será 0.
		// i = 1(m) * 10(y) - i será 10.
		// i = 2(m) * 10(y) - i será 20.
		// i = 3(m) * 10(y) - i será 30.
		// Repare que o nosso i não aumenta de 1 em 1, mas sim de 10 em 10.

		for (i=0, m=0; i<=n ; i = m * y) {
			m++;
			printf("%d\n", i);
		}

	} else {

		printf("Por favor, coloque um delimitador maior do que o valor a ser calculado.");

	}

}
