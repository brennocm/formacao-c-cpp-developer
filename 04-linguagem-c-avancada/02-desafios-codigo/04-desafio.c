#include <stdio.h>
#include <stdlib.h>

struct Livro {
  char titulo[50];
  char autor[50];
  int ano;
};

int main() {
  int n;
  scanf("%d", & n);
  struct Livro biblioteca[n];
  for (int i = 0; i < n; i++) {
    scanf(" %[^\n]", biblioteca[i].titulo);
    scanf(" %[^\n]", biblioteca[i].autor);
    scanf("%d", & biblioteca[i].ano);
  }
  
  int indiceLivroMaisAntigo = 0;
  for (int i = 1; i < n; i++) {
    if (biblioteca[i].ano < biblioteca[indiceLivroMaisAntigo].ano) {
      indiceLivroMaisAntigo = i;
    }
  }

  printf("%s\n", biblioteca[indiceLivroMaisAntigo].titulo);
  printf("%s\n", biblioteca[indiceLivroMaisAntigo].autor);
  printf("%d", biblioteca[indiceLivroMaisAntigo].ano);
  
  return 0;
}

