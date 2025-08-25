#include <stdio.h>

int main() {
  // Variáveis da primeira carta
  int populacao1, numDePontosTuristicos1;
  float area1, pib1;
  char estado1, codigoDaCarta1[5], nomeDaCidade1[50];

  // Variáveis da segunda carta
  int populacao2, numDePontosTuristicos2;
  float area2, pib2;
  char estado2, codigoDaCarta2[5], nomeDaCidade2[50];

  // Lendo os dados da primeira carta
  printf("Digite os dados da primeira carta...\n");
  
  printf("Digite uma letra entre 'A' a 'H' para o estado: ");
  scanf("%c", &estado1);

  printf("Digite o código da carta (ex: A01, H04): ");
  scanf("%s", codigoDaCarta1);

  printf("Digite o nome da cidade sem espaços: ");
  scanf("%s", nomeDaCidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a área: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &numDePontosTuristicos1);

  // Lendo os dados da segunda carta
  printf("\nDigite os dados da segunda carta...\n");
  
  printf("Digite uma letra entre 'A' a 'H' para o estado: ");
  scanf(" %c", &estado2);
  
  printf("Digite o código da carta (ex: A01, H04): ");
  scanf("%s", codigoDaCarta2);
  
  printf("Digite o nome da cidade sem espaços: ");
  scanf("%s", nomeDaCidade2);
  
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  
  printf("Digite a área: ");
  scanf("%f", &area2);
  
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  
  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &numDePontosTuristicos2);

  // Exibindo os resultados da primeira carta
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigoDaCarta1);
  printf("Nome da Cidade: %s\n", nomeDaCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos1);

  // Exibindo os resultados da segunda carta
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigoDaCarta2);
  printf("Nome da Cidade: %s\n", nomeDaCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos2);

  return 0;
}