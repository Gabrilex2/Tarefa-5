#include <stdio.h>

int main() {
    int V1[15], V2[15];
    int i, contador = 0;


    printf("Digite 15 numeros para o vetor V1:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &V1[i]);
    }


    printf("Digite 15 numeros para o vetor V2:\n");
    for(i = 0; i < 15; i++) {
        scanf("%d", &V2[i]);
    }


    for(i = 0; i < 15; i++) {
        if(V1[i] == V2[i]) {
            contador++; //
        }
    }


    printf("Os vetores V1 e V2 possuem o mesmo numero na mesma posicao %d vezes.\n", contador);

    return 0;
}
