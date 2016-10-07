#include <stdio.h>

int main () {

    int n, peso = 1, valor = 0, pesototal = 0, valortotal = 0;
    float resultado;

    printf("Quantos valores?");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Qual é o peso do valor?\n");
        scanf("%d", &peso);

        printf("Qual é o valor?\n");
        scanf("%d", &valor);

        pesototal   += peso;
        valortotal  += valor * peso;
    }

    printf("Valor final: %f", (float) valortotal / pesototal  );

}