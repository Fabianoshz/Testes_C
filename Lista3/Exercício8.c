#include <stdio.h>

int main()
{
	int matricula = 0, idade = 0, tempo = 0, sexo_feminino = 0, i;
	float salario = 0.0 , media_salarial = 0.0;
	char s;
	int funcionarios = 3;

	for (i=0;i<funcionarios;i++) {

		printf("Insira matrícula: ");
		scanf("%d", &matricula);

		printf("Insira o sexo ('f' ou 'm'): ");
		scanf(" %c", &s);

		printf("Insira idade: ");
		scanf("%d", &idade);

		printf("Insira salário: ");
		scanf("%f", &salario);

		printf("Insira tempo de trabalho em anos: ");
		scanf("%d", &tempo);

		if (s == 'f') {
			sexo_feminino += 1;
		} else {
			media_salarial += salario;
		}

	}

	printf("Quantidade de funcionários do sexo feminino: %d\n", sexo_feminino);
	printf("Média salarial dos homens: %.2f\n", media_salarial / (funcionarios - sexo_feminino));

}
