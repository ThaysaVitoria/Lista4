#include <stdio.h>

int PosNeg(int num);

int main()
{
    int num;
    printf("Informe um número: ");
    scanf("%d", & num);
    PosNeg(num);
}

int PosNeg(int num){
    if(num < 0){
        printf("O número é negativo", num);
    }
    else{
        printf("O número é positivo", num);
    }
}