#include <stdio.h>

int main()
{
    int valor, menor, maior = 0, c = 0;
    char sair;

    while (1 == 1) { // Hoje é dia de fazer while true!

        printf("Digite 'x' para sair ou outro caracter para continuar.");
        scanf(" %c", &sair);

        if (sair == 'x')
            break;

        printf("\nDigite um valor:");
        scanf("%d", &valor);

        if (c == 0)
            menor = valor;

        c++;

        if (valor < menor) {
            menor = valor;
        }
        if (valor > maior) {
            maior = valor;
        }
    }

    if (menor && maior) {
        printf("Menor valor: %d\n", menor);
        printf("Maior valor: %d\n", maior);
    } else {
        printf("Você precisa fornecer pelo menos 2 números");
    }
}