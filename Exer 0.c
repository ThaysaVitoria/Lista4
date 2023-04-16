#include <stdio.h>

int ParImpar(int num);

int main()
{
    int num;
    printf("Informe um número: ");
    scanf("%d", & num);
    ParImpar(num);
    
}

int ParImpar(int num){
    if(num % 2 == 0){
        printf("O número é Par", num);
    }
    else{
        printf("O número é Impar", num);
    }
}
