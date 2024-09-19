#include <stdio.h>

int main() {
    int Q[20];
    int i;

  for(i = 0; i < 20; i++){
      printf("insira os numeros:\n");
      scanf("%d", &Q[i]);
  }

  printf("os numero na ordem inversa sao\n");
  for(i  = 19; i>=0; i--){
      printf("%d\n",Q[i]);
  }


    return 0;
}
