#include <stdio.h>
#include <math.h>

int main() {
  int largura, comprimento, area, tempo;

  scanf("%d", &largura);
  scanf("%d", &comprimento);

  area = largura * comprimento;
  tempo = ceil(area / 5.0);

    
   if (tempo > 120) {
        printf("Não é possível limpar toda a área da sala em no máximo 2 horas");
    } else {
        printf("O robô de limpeza levará %d minutos para limpar a sala.", tempo);
    }
