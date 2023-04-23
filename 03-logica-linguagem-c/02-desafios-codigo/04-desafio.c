#include <stdio.h>

char* verificaDistancia(int distancia) {
  if (distancia <= 10) {
    return "O robô está próximo!";
  } else {
    return "O robô está longe!";
  }
}

int main() {
  int distancia;

  scanf("%d", &distancia);
  
  printf("%s", verificaDistancia(distancia));
  
    
  return 0;
}
