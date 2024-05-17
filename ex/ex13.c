#include <stdio.h>

int main(){

    int num;
    printf("Digite o numero inteiro de tres casas: ");
    scanf("%d", &num);
    if ((num / 100) < 0 || (num / 100) >= 10){
        printf("O numeoro apresentado nao tem tres casas seu burro.");
    }

    int dezena = (num % 100) / 10;

    printf("%d", dezena);
    return 0;

}