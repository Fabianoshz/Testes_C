// Convertor HH:MM:SS para segundos.
#include <stdio.h>
int main() {

	int h;
	int m;
	int s;

	printf("Por favor, digite as horas:");
	scanf("%d", &h); // Guardar o valor recebido na variável h.
	
	printf("Por favor, digite os minutos:");
	scanf("%d", &m); // Guardar o valor recebido na variável m.

	printf("Por favor, digite os segundos:");
	scanf("%d", &s); // Guardar o valor recebido na variável s.

	int min = h*60 + m;
	int seg = min*60 + s;

	printf("A quantidade em segundos é: ");
	printf("%d\n", seg);

	return 0;
}