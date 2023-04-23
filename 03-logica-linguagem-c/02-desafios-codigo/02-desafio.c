#include <stdio.h>

int main() {
  float peso, altura;
  char temPelos, ehMamifero;

  scanf("%f", &peso);
  scanf("%f", &altura);
  scanf(" %c", &temPelos);
  scanf(" %c", &ehMamifero);
  
  if (peso >= 2000 && altura >= 300) {
    printf("O animal é um elefante!");
  
  } else if (altura >= 150 && ehMamifero == 's'){
    printf("O animal é um cavalo!");
    
  } else if (temPelos == 's' && ehMamifero == 's'){
    printf("O animal é um cachorro!");
    
  } else if (temPelos == 'n' && ehMamifero == 'n'){
    printf("O animal é uma serpente!");
    
  } else if (temPelos == 'n' && ehMamifero == 's'){
    printf("O animal é uma tartaruga!");
    
  } else {
    printf("Não foi possível classificar o animal!");
  
  }

  return 0;
}
