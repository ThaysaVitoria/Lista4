#include <stdio.h>

int Menor(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    printf("Informe três valores: ");
    scanf("%d %d %d", & n1, & n2, & n3);
    Menor(n1, n2, n3);
}

int Menor(int n1, int n2, int n3){
    if(n1 < n2 && n2 < n3){
        printf("%d é o menor", n1);
    }
    else if(n2 < n1 && n1 < n3){
        printf("%d é o menor", n2);
    }
    else{
        printf("%d é o menor", n3);
    }
}