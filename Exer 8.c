#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main()
{
    int numero = dado();
    printf("O número sorteado é: %d", numero);
}

int dado(){
    srand(time(NULL));
    return rand() % 6 + 1;
}