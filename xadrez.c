#include <stdio.h>

// Simulando o movimento das peças com funções recursivas
void moverTorre(int casas) {
  if (casas > 0) {
    printf("Direita\n");
    moverTorre(casas - 1);
  }
}

void moverBispo(int casas) {
  if (casas > 0) {
    for (int i = 0; i < 1; i++) {          // loop "vertical"
      for (int j = 0; j < 1; j++) {        // loop "horizontal"
        printf("Cima Direita\n");
      }
    }
    moverBispo(casas - 1);
  }
}

void moverRainha(int casas) {
  if (casas > 0) {
    printf("Esquerda\n");
    moverRainha(casas - 1);
  }
}


int main () {
  printf("Torre se movimentando...\n");
  moverTorre(5);
  printf("Fim do movimento da Torre!\n");

  printf("\nBispo se movimentando...\n");
  moverBispo(5);
  printf("Fim do movimento do Bispo!\n");

  printf("\nRainha se movimentando...\n");
  moverRainha(8);
  printf("Fim do movimento da Rainha!\n");

  printf("\nCavalo se movimentando...\n");

  int mov = 1; // quantidade de movimentos completos

  for (int i = 0; i < mov; i++) {
    for (int j = 0, k = 0; j < 3; j++) {
      // Subindo
      if (j < 2) {
        printf("Cima\n");
        k++;
        continue;
      }
      // Indo para a direita
      if (k == 2) {
        printf("Direita\n");
        break;
      }
    }
  }

  printf("Fim do movimento do Cavalo!\n");

  return 0;
}
