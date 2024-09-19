#include <stdio.h>

int main() {
    int VET[50];
    int i, j;
    int repetido = 0;


    printf("Digite 50 numeros:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &VET[i]);
    }


    printf("Verificando numeros repetidos:\n");
    for(i = 0; i < 50; i++) {
        for(j = i + 1; j < 50; j++) {
            if(VET[i] == VET[j]) {
                printf("Numero repetido: %d encontrado nas posicoes %d e %d\n", VET[i], i, j);
                repetido = 1;
            }
        }
    }

    if(!repetido) {
        printf("Nao existem numeros repetidos no vetor.\n");
    }

    return 0;
}
