#include <stdio.h>

int main (){

    int i = 1, n, soma = 0;
    printf("Digite o número por favor: ");
    scanf("%i", &n);

    do {
        if (n%i == 0) {
            soma += i;
        }
        i++;
    } while (i<n);

    if (n == soma){
        printf("%d é um número perfeito.\n", n);
    } else {
        printf("%d não é um número perfeito.\n", n);
    }

}