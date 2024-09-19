#include <stdio.h>

int main() {
    float notas[20], soma = 0.0;
    float media_aluno = 0, media_turma = 0;
    int i;


    for(i = 0; i < 20; i++) {
        do{
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        }while(notas[i] > 10 || notas[i] < 0);
        soma += notas[i];

    }

    media_turma = soma / 20;


    printf("Media da turma: %.2f\n", media_turma);


    for(i = 0; i < 20; i++) {
        media_aluno = notas[i];

        if(media_aluno >= 7) {
            printf("Aluno %d: Aprovado - Media: %.2f\n", i + 1, media_aluno);
        } else {
            printf("Aluno %d: Reprovado - Media: %.2f\n", i + 1, media_aluno);
        }
    }

    return 0;
}
