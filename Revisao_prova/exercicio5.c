#include <stdio.h>

int main (){

    int n;

    printf("Digite o número por favor: ");
    scanf("%i", &n);


    for (int i = 1; i <= n; ++i)
    {
        for (int a = 1; a <= n; ++a)
        {
            if (i<=a) {
                printf("(%d,%d)",i,a);
            }
        }
    }

}