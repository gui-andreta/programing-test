#include <stdio.h>

void main() {
    float x1, y1, x2, y2, xmet, ymet, area;
    int met, i, soma;

    x1 = 0;
    x2 = 0;
    xmet = 0;

    y1 = 0;
    y2 = 0;
    ymet = 0;

    soma = 0;
    i = 0;
    area = 0;

    //canto superior esquerdo
    printf("Digite as coordenadas (x, y) do canto superior esquerdo da fazenda: ");
    scanf("%f", &x1);
    scanf("%f", &y1);

    //canto inferior direito
    printf("Digite as coordenadas (x, y) do canto inferior direito da fazenda: ");
    scanf("%f", &x2);
    scanf("%f", &y2);

    //area da fazenda
    area = (y1 - y2) * (x2 - x1);

    //quantidade de meteoritos (indice)
    printf("Digite a quantidade de meteoritos que cairam na regiao: ");
    scanf("%i", &met);

    for(i = 0; i < met; i++) {
        printf("Digite as coordenadas (x, y) dos meteoritos que cairam na regiao: ");
        scanf("%f", &xmet);
        scanf("%f", &ymet);

        if(xmet >= x1 && xmet <= x2 && ymet >= y2 && ymet <= y1) {
            soma = soma + 1;
        }
    }
    printf("\n A quantidade de meteoritos que cairam dentro da area da fazenda foi: %i", soma);
}
