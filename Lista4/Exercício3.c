#include <stdio.h>

int main()
{
    int base, expoente, valor = 1;

    printf("Por favor insira a base: \n");
    scanf("%d", &base);

    printf("Por favor insira o expoente: \n");
    scanf("%d", &expoente);

    for (int i = 0; i < expoente; ++i) {
        valor = base * valor;
    }

    printf("%d\n", valor);

}