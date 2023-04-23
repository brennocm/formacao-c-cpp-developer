#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    if (b == 0) {
        printf("Não é possível dividir por zero\n");
        return 0;
    } else {
        return a / b;
    }
}

int main() {
    int num1, num2, resultado;
    char op;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultado = soma(num1, num2);
            printf("%d + %d = %d\n", num1, num2, resultado);
            break;
        case '-':
            resultado = subtracao(num1, num2);
            printf("%d - %d = %d\n", num1, num2, resultado);
            break;
        case '*':
            resultado = multiplicacao(num1, num2);
            printf("%d * %d = %d\n", num1, num2, resultado);
            break;
        case '/':
            resultado = divisao(num1, num2);
            if (resultado != 0) {
                printf("%d / %d = %d\n", num1, num2, resultado);
            }
            break;
        default:
            printf("Operação inválida\n");
            break;
    }

    return 0;
}
