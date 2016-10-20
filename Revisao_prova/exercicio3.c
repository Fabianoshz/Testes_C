#include <stdio.h>

int main()
{
    int valor, num, i=0, soma, divisor;

    printf("Digite um número\n");
    scanf("%d",&valor);

    num = valor;

    // Vamos contar em quantas vezes precisaremos andar com a vírgula.
    while (num >= 10) {
        num = num / 10;
        i++;
    }

    for (;i > 0;i--){
        divisor = 1; // Daremos um valor, pois iremos utiliza-lo.

        // Aqui definimos aonde estamos, ou, o quanto andaremos.
        for (int a=0; a<i ; ++a) {
            divisor = divisor * 10;
        }

        soma += (valor / divisor) % 10; // Pegamos apenas o primeiro dígito a esquerda da vírgula.
    }
    printf("%d\n", soma + (valor % 10) );
}