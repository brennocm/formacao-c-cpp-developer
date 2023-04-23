#include <stdio.h>

void classificarNumero(int numero, int *positivos, int *negativos) {
  if (numero < 0) {
    printf("negativo!\n");
    (*negativos)++;
  } else if (numero > 0) {
    printf("positivo!\n");
    (*positivos)++;
  }
}

int main() {
  int numero, positivos = 0, negativos = 0;
  
  while (1) {
    scanf("%d", &numero);
    if (numero == 0) {
      break; // Encerra o laço se o usuário digitar 0.
    }
    classificarNumero(numero, &positivos, &negativos);
  }
  
  printf("%d números positivos, %d números negativos\n", positivos, negativos);
  
  return 0;
}
