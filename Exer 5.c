#include <stdio.h>

int Menor(int n1, int n2);

int main()
{
    int n1, n2;
    printf("Informe dois valores: ");
    scanf("%d %d", & n1, & n2);
    Menor(n1, n2);
}

int Menor(int n1, int n2){
    if(n1 < n2){
        printf("%d é menor", n1);
    }
    else{
        printf("%d é menor", n2);
    }
}
