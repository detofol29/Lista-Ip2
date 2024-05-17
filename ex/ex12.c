#include <stdio.h>
#include <math.h>

int main(){

    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade >= 0 && idade <= 2){
        printf("Recem-nascido");
    }

    if(idade >= 3 && idade <= 11){
        printf("crianca");
    }

    if(idade >= 12 && idade <= 19){
        printf("Adolescente");
    }

    if(idade >= 20 && idade <= 55){
        printf("Adulto");
    }

    if(idade > 55){
        printf("Idoso");
    }


    return 0;
}