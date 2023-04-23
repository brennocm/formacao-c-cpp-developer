#include <stdio.h>
#include <math.h>

int main() {
int tamanho, i, soma = 0;
scanf("%d", &tamanho);
int veiculosPorHora[tamanho];

for (i = 0; i < tamanho; i++) {
    scanf("%d", &veiculosPorHora[i]);
    soma += veiculosPorHora[i];
}

double media = (double) soma / tamanho;
printf("Média de veículos por hora: %.0f", round(media));

return 0;
}
