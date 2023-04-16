#include <stdio.h>

int Maior(int n1, int n2);

int main()
{
    int n1, n2, maior, menor;
    printf("Informe dois valores: ");
    scanf("%d %d", & n1, & n2);
    Maior(n1, n2);
}

int Maior(int n1, int n2){
    if(n1 > n2){
        printf("%d é maior", n1);
    }
    else{
        printf("%d é maior", n2);
    }
}