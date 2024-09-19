#include <stdio.h>

int main() {
    int vetor[30];
    int i, numero_para_contar, contador = 0;


    printf("Digite 30 numeros:\n");
    for(i = 0; i < 30; i++) {
        scanf("%d", &vetor[i]);
    }


    printf("Digite um numero para verificar quantas vezes ele aparece:\n");
    scanf("%d", &numero_para_contar);


    for(i = 0; i < 30; i++) {
        if(vetor[i] == numero_para_contar) {
            contador++;
        }
    }


    printf("O numero %d aparece %d vezes no vetor.\n", numero_para_contar, contador);

    return 0;
}
