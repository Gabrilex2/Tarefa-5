#include <stdio.h>

int main() {
    int Q[20];
    int menor, posicao;


    for (int i = 0; i < 20; i++) {
        do {
            printf("Digite um numero positivo para a posicao %d: ", i + 1);
            scanf("%d", &Q[i]);
        } while (Q[i] < 0);
    }


    menor = Q[0];
    posicao = 0;


    for (int i = 1; i < 20; i++) {
        if (Q[i] < menor) {
            menor = Q[i];
            posicao = i;
        }
    }


    printf("O menor valor é %d e esta na posicao %d.\n", menor, posicao + 1);

    return 0;
}
