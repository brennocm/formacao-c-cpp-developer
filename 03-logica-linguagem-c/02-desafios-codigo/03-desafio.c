#include <stdio.h>
#include <string.h>

int main() {
  char mensagem[100];
  char palavra[100];
  
  scanf("%[^\n]", mensagem);

  char* tk = strtok(mensagem, " ");

  while (tk != NULL) {
        strcpy(palavra, tk);
        printf("%s %s ", palavra, palavra);
        tk = strtok(NULL, " ");
  }
  return 0;
}

