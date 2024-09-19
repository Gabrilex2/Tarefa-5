#include <stdio.h>

int main() {
    int numeros[20];
    int novo_vetor[19];
    int i, j = 0, numero_para_verificar, encontrado = 0;


    printf("Digite 20 numeros:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
    }


    printf("Digite um numero para verificar:\n");
    scanf("%d", &numero_para_verificar);


    for(i = 0; i < 20; i++) {
        if(numeros[i] == numero_para_verificar) {
            encontrado = 1; // Número encontrado
        } else {
            novo_vetor[j] = numeros[i];
            j++;
        }
    }

    if(encontrado) {

        printf("Novo vetor sem o numero %d:\n", numero_para_verificar);
        for(i = 0; i < 19; i++) {
            printf("%d ", novo_vetor[i]);
        }
        printf("\n");
    } else {

        printf("O numero %d nao foi encontrado no vetor.\n", numero_para_verificar);
    }

    return 0;
}
