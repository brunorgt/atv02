#include <stdio.h>

int main(void) {
  /* Variaveis */
  int valor_inicial, valor_final, i;
  
  printf("Digite um valor inicial: \n ");
  scanf("%d", &valor_inicial);

  printf("Digite um valor final: \n");
  scanf("%d", &valor_final);

  for (i=valor_inicial; i<=valor_final; i++){
    if (i % 2 != 0){
      printf("Impar %d \t", i);
    }
  }
  
  return 0;
}