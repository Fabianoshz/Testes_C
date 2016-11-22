#include <stdio.h>


float calculaMedia (float AV1, float AV2) {
    // printf("%.1f\n", (AV1 + AV2) / 2);
    return (AV1 + AV2) / 2;
}

int main()
{
    float a,b;

    printf("Insira um valor real\n");
    scanf("%f", &a);

    printf("Insira outro valor real\n");
    scanf("%f", &b);
    printf("\n");

    printf("%.1f\n", calculaMedia(a,b));

}