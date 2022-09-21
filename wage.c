#include <stdio.h>

void main() {
    int duzentos, cem, cinquenta, vinte, dez, cinco, dois, um, salario, resto;

    duzentos = 0;
    cem = 0;
    cinquenta = 0;
    vinte = 0;
    dez = 0;
    cinco = 0;
    dois = 0;
    um = 0;
    salario = 0;
    resto = 0;

    printf("Digite o valor do salario do funcionario: ");
    scanf("%i", &salario);

    resto = salario;

    while(resto > 0) {
        if(resto >= 200){
            duzentos = salario / 200;
            resto = salario % 200;
        } else if(resto >= 100 && resto < 200){
            cem = resto / 100;
            resto = resto % 100;
        } else if(resto >= 50 && resto < 100){
            cinquenta = resto / 50;
            resto = resto % 50;
        } else if(resto >= 20 && resto < 50){
            vinte = resto / 20;
            resto = resto % 20;
        } else if(resto >= 10 && resto < 20){
            dez = resto / 10;
            resto = resto % 10;
        } else if(resto >= 5 && resto < 10){
            cinco = resto / 5;
            resto = resto % 5;
        } else if(resto >= 2 && resto < 5){
            dois = resto / 2;
            resto = resto % 2;
        } else if(resto >= 1 && resto < 2){
            um = resto / 1;
            resto = resto % 1;
        }
    }
    printf("A quantidade de notas sera: ");
    printf("\n Duzento: %i", duzentos);
    printf("\n Cem: %i", cem);
    printf("\n Cinquenta: %i", cinquenta);
    printf("\n Vinte: %i", vinte);
    printf("\n Dez: %i", dez);
    printf("\n Cinco: %i", cinco);
    printf("\n Dois: %i", dois);
    printf("\n Um: %i", um);
}
