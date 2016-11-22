#include <stdio.h>


float potencia (float base, int expoente)
{
    float return_base = base;
    for (int i = 1; i < expoente; ++i)
    {
        return_base *= base;
    }
    return return_base;
}

int main()
{
    float a;
    int b;

    printf("Insira a base\n");
    scanf("%f", &a);

    printf("Insira um expoente\n");
    scanf("%i", &b);
    printf("\n");

    printf("%f\n", potencia(a,b));
}