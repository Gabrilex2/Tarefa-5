#include <stdio.h>

int main() {
    int A[10], M[10];
    int i, x;

  for(i = 0; i < 10; i++){
      printf("insira os numeros para o vertor A:\n");
      scanf("%d", &A[i]);
  }
  printf("digite o valor de x:\n");
  scanf("%d", &x);

for(i = 0; i < 10; i++){
    M[i] = A[i] * x;
    printf("o valor do vetor M e:%d\n", M[i]);

}

    return 0;
}
