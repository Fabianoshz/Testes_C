#include <stdio.h>

int main()
{
	int qt_pessoas = 0, i, gostou = 0, n_gostou = 0, m_gostou = 0;
	char s, g;

	printf("Quantas pessoas foram entrevistadas? ");
	scanf("%d", &qt_pessoas);

	for (i=1;i<=qt_pessoas;i++){
		printf("Pessoa %d- Sexo:\n", i );
		scanf(" %c", &s);

		printf("Pessoa %d- Gostou/Não gostou:\n", i );
		scanf(" %c", &g);

		if (g == 's') {
			gostou += 1;

			if (s == 'm') {
				m_gostou += 1;
			} 

		} else {
			n_gostou += 1;
		}

	}

	printf("Número de pessoas que gostou do produto: %d\n", gostou);
	printf("Número de pessoas que não gostaram do produto: %d\n", n_gostou);
	
	if (m_gostou > (gostou - m_gostou)) {
		printf("O produto teve uma melhor aceitação entre os homens com %d pontos.\n", m_gostou);
	} else if ( m_gostou == (gostou - m_gostou)) {
		printf("A aceitação foi igual entre ambos os sexos.\n");
	} else {
		printf("O produto teve uma melhor aceitação entre as mulheres com %d pontos.\n", gostou - m_gostou);
	}

}
