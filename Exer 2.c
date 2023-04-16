#include <stdio.h>

float calculaDelta(float a, float b, float c, float delta);

int main()
{
    float a, b, c, delta;
    printf("Informe o valor de a, b e c: ");
    scanf("%f %f %f", & a, & b, & c);
    calculaDelta(a, b, c, delta);
}

float calculaDelta(float a, float b, float c, float delta){
    delta = b * b - 4 * a * c;
    printf("O valor é: %g", delta);
}

