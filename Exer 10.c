#include <stdio.h>

int main()
{
    float temperatura;
    char tipo;
    
    printf("Digite C para Celsiu e F para Fahrenheit: ");
    scanf("%c", & tipo);
    
    switch (tipo){
        case 'C':
        case 'c':
        printf("Informe a temperatura: ");
        scanf("%g", & temperatura);
        printf("A temperatura %g em Celsius para Fahrenheit é %g", temperatura, temperatura * 1.8 + 32);
        break;
        
        case 'F':
        case 'f':
        printf("Informe a temperatura: ");
        scanf("%g", & temperatura);
        printf("A temperatura %g em Fahrenheit para Celsius é %g", temperatura, (temperatura - 32) / 1.8);
        break;
        
        default:
        printf("Opção Inválida!");
        break;
    }
}

