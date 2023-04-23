#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, palpite, tentativas = 0;
    srand(time(NULL));
    num = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhação! Eu escolhi um número entre 1 e 100. Você tem no máximo 7 tentativas para adivinhar.\n");

    do {
        printf("Tentativa %d: ", tentativas+1);
        scanf("%d", &palpite);

        if (palpite < num) {
            printf("O número que escolhi é maior que %d.\n", palpite);
        } else if (palpite > num) {
            printf("O número que escolhi é menor que %d.\n", palpite);
        }

        tentativas++;
    } while (palpite != num && tentativas < 7);

    if (palpite == num) {
        printf("Parabéns, você acertou em %d tentativas!\n", tentativas);
    } else {
        printf("Você não conseguiu adivinhar o número em 7 tentativas. O número era %d.\n", num);
    }

    return 0;
}
