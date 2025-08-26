#include <stdio.h>

int main() {
// Variáveis da primeira carta
  unsigned long int populacao1;
  int numDePontosTuristicos1;
  float area1, pib1;
  char estado1, codigoDaCarta1[5], nomeDaCidade1[50];

  // Variáveis da segunda carta
  unsigned long int populacao2;
  int numDePontosTuristicos2;
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
  scanf("%lu", &populacao1);

  printf("Digite a área: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &numDePontosTuristicos1);

  // Calculando Densidade Populacional e PIB per Capita
  float densidadePopulacional1 = populacao1 / area1;
  float pibPerCapita1 = (pib1 * 10e8) / populacao1;

  // Calculando o super poder
  float superPoder1 = (float)populacao1 + area1 + pib1 + (float)numDePontosTuristicos1 + (1/densidadePopulacional1) + pibPerCapita1;

  // Lendo os dados da segunda carta
  printf("\nDigite os dados da segunda carta...\n");
  
  printf("Digite uma letra entre 'A' a 'H' para o estado: ");
  scanf(" %c", &estado2);
  
  printf("Digite o código da carta (ex: A01, H04): ");
  scanf("%s", codigoDaCarta2);
  
  printf("Digite o nome da cidade sem espaços: ");
  scanf("%s", nomeDaCidade2);
  
  printf("Digite a população: ");
  scanf("%lu", &populacao2);
  
  printf("Digite a área: ");
  scanf("%f", &area2);
  
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  
  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &numDePontosTuristicos2);

  // Calculando Densidade Populacional e PIB per Capita
  float densidadePopulacional2 = populacao2 / area2;
  float pibPerCapita2 = (pib2 * 10e8) / populacao2;

  // Calculando o super poder
  float superPoder2 = (float)populacao2 + area2 + pib2 + (float)numDePontosTuristicos2 + (1/densidadePopulacional2) + pibPerCapita2;

  // Exibindo os resultados da primeira carta
  printf("\n------- Carta 1 -------\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigoDaCarta1);
  printf("Nome da Cidade: %s\n", nomeDaCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos1);
  printf("Densidade Populacional: %.2f habitantes/Km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  // Exibindo os resultados da segunda carta
  printf("\n------- Carta 2 -------\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigoDaCarta2);
  printf("Nome da Cidade: %s\n", nomeDaCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos2);
  printf("Densidade Populacional: %.2f habitantes/Km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // Comparando os atributos das cartas
  printf("\n------- Comparação -------\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Número de Pontos Turísticos: Carta 1 venceu (%d)\n", numDePontosTuristicos1 > numDePontosTuristicos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

  return 0;
}
