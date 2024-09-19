#include <stdio.h>

int main() {
    int numeros[11];
    int i, j, novo_numero, temp;
    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }


    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(numeros[i] > numeros[j]) {

                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }


    printf("Vetor ordenado em ordem crescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");


    printf("Digite mais um numero:\n");
    scanf("%d", &novo_numero);

    for(i = 9; i >= 0; i--) {
        if(novo_numero < numeros[i]) {
            numeros[i + 1] = numeros[i];
        } else {
            break;

        }
    }
    numeros[i + 1] = novo_numero;


    printf("Vetor atualizado em ordem crescente:\n");
    for(i = 0; i < 11; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
