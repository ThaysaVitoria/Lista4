#include <stdio.h>

int Maior(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    printf("Informe três valores: ");
    scanf("%d %d %d", & n1, & n2, & n3);
    Maior(n1, n2, n3);
}

int Maior(int n1, int n2, int n3){
    if(n1 > n2 && n2 > n3){
        printf("%d é maior", n1);
    }
    else if(n2 > n1 && n1 > n3){
        printf("%d é maior", n2);
    }
    else{
        printf("%d é o maior", n3);
    }
}
