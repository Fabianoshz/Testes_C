#include <stdio.h>

void exibirNumeros (int A, int B)
{
    A++;
    do {
        printf("%i\n", A);
        A++;
    } while(A < B);
}

int main()
{
    int a,b;

    printf("Insira um valor inteiro\n");
    scanf("%i", &a);

    printf("Insira outro valor inteiro\n");
    scanf("%i", &b);
    printf("\n");

    exibirNumeros(a,b);

}