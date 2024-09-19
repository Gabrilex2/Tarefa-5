#include <stdio.h>

#define DIAS_ANO 365

int main() {
    float temperaturas[DIAS_ANO], soma = 0, media_anual;
    float menor, maior;
    int dias_abaixo_media = 0;


    for(int i = 0; i < DIAS_ANO; i++) {
        printf("Digite a temperatura media do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);


        soma += temperaturas[i];


        if (i == 0) {
            menor = temperaturas[i];
            maior = temperaturas[i];
        }


        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }


    media_anual = soma / DIAS_ANO;


    for(int i = 0; i < DIAS_ANO; i++) {
        if (temperaturas[i] < media_anual) {
            dias_abaixo_media++;
        }
    }


    printf("\nMenor temperatura do ano: %.2f\n", menor);
    printf("Maior temperatura do ano: %.2f\n", maior);
    printf("Temperatura media anual: %.2f\n", media_anual);
    printf("Numero de dias com temperatura abaixo da media anual: %d\n", dias_abaixo_media);

    return 0;
}
