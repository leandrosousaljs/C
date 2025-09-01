#include <stdio.h>

int main() {
  // Inicializa o tabuleiro com zeros
  int tabuleiro[10][10] = {0};

  //Posicionando o primeiro navio na horizontal nas coordenadas (E3 - G3)
  for (int i = 0; i < 3; i++) {
    tabuleiro[2][4 + i] = 3;
  }

  //Posicionando o segundo navio na vertical nas coordenadas (B7 - B9)
  for (int i = 0; i < 3; i++) {
    tabuleiro[6 + i][1] = 3;
  }

  //Posicionando o terceiro navio na diagonal nas coordenadas (A1 - C3)
  for (int i = 0; i < 3; i++) {
    tabuleiro[i][i] = 3;
  }

  //Posicionando o quarto navio na diagonal nas coordenadas (I8 - G10)
  for (int i = 0; i < 3; i++) {
    tabuleiro[7 + i][8 - i] = 3;
  }

  printf("Tabuleiro:\n");
  printf("   ");
  // Imprime as colunas de A a J
  for (int i = 0; i < 10; i++) {
    printf("%c ", 'A' + i);
  }
  printf("\n");

  // Imprimindo o tabuleiro
  for (int i = 0; i < 10; i++) {
    // Imprime as linhas de 1 a 10
    printf("%2d ", i + 1);
    for (int j = 0; j < 10; j++) {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }

  return 0;
}
