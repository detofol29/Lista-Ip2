#include <stdio.h>
int main()
{
    int A, B, C, maior, menor, inter;
    printf("\nDigite o valor do primeiro numero: ");
    scanf("%d", &A);
    printf("\nDigite o valor do segundo numero: ");
    scanf("%d", &B);
    printf("\nDigite o valor do terceiro numero: ");
    scanf("%d", &C);
    if(A > B && B > C){maior = A; inter = B; menor = C;}
    if(A > C && C > B){maior = A; inter = C; menor = B;}
    if(B > A && A > C){maior = B; inter = A; menor = C;}
    if(B > C && C > A){maior = B; inter = C; menor = A;}
    if(C > A && A > B){maior = C; inter = B; menor = A;}
    if(C > B && B > A){maior = C; inter = A; menor = B;}

    printf("%d, %d, %d", menor, inter, maior);   
    
    return 0;
}