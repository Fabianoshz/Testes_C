#include <stdio.h>

int main()
{
	int r, A, i, i2;
	float Q, resultado;
	
	printf("Por favor, insira o valor de reais que Joãozinho investiu:\n");
	scanf("%f", &Q);

	printf("Por favor, insira o valor da porcentagem de rendimento da aplicação:\n");
	scanf("%d", &r);

	printf("Quantos anos se passaram?:\n");
	scanf("%d", &A); 

	resultado = Q;

	for (i=1;i<=A;i++) {
		for (i2=1;i2<=12;i2++) {
			resultado += (resultado * r) / 100.0;
		}
	}

	printf("%.2f\n", resultado);

}
