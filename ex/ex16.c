#include <stdio.h>

int main(){
    
    int a, b, c;
    printf("Digite o valor de a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    double delta = (b * b) - 4 * a * c;
    double x1 = (-b - sqrt(delta)) / 2 * a;
    double x2 = (-b + sqrt(delta)) / 2 * a;

    printf("O valor de x1 eh %lf, o valor de x2 eh %lf\n", x1, x2);
    //: “RAÍZES IMAGINÁRIAS”, “RAIZ ÚNICA” ou “RAÍZES DISTINTAS”. 
    if(x1 != x2){
        printf("Raizes distintas!");
    }

    if(x1 == x2){
        printf("Raiz unica!");
    }

    if(x1 == 0 && x2 == 0){
        printf("Raiz imaginaria!");
    }

    return 0;
}