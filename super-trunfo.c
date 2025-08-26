#include <stdio.h>

int main() {
  // Variáveis da primeira carta
  int codigoNumerico1, populacao1, numDePontosTuristicos1;
  float area1;
  char estado1, nomeDaCidade1[50];
  double pib1;

  // Variáveis da segunda carta
  int codigoNumerico2, populacao2, numDePontosTuristicos2;
  float area2;
  char estado2, nomeDaCidade2[50];
  double pib2;

  // Lendo os dados da primeira carta
  printf("Digite os dados da primeira carta...\n");
  
  printf("Digite uma letra entre 'A' a 'H' para o estado: ");
  scanf("%c", &estado1);

  printf("Digite o código numérico da carta (ex: 01, 04): ");
  scanf("%d", &codigoNumerico1);

  printf("Digite o nome da cidade sem espaços: ");
  scanf("%s", nomeDaCidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a área: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%lf", &pib1);

  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &numDePontosTuristicos1);

  // Calculando Densidade Populacional e PIB per Capita
  double densidadePopulacional1 = populacao1 / area1;
  double pibPerCapita1 = pib1 / populacao1;

  // Lendo os dados da segunda carta
  printf("\nDigite os dados da segunda carta...\n");
  
  printf("Digite uma letra entre 'A' a 'H' para o estado: ");
  scanf(" %c", &estado2);
  
  printf("Digite o código numérico da carta (ex: 01, 04): ");
  scanf("%d", &codigoNumerico2);
  
  printf("Digite o nome da cidade sem espaços: ");
  scanf("%s", nomeDaCidade2);
  
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  
  printf("Digite a área: ");
  scanf("%f", &area2);
  
  printf("Digite o PIB: ");
  scanf("%lf", &pib2);
  
  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &numDePontosTuristicos2);

  // Calculando Densidade Populacional e PIB per Capita
  double densidadePopulacional2 = populacao2 / area2;
  double pibPerCapita2 = pib2 / populacao2;

  // Exibindo os resultados da primeira carta
  printf("\n------- Carta 1 -------\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %c%02d\n", estado1, codigoNumerico1);
  printf("Nome da Cidade: %s\n", nomeDaCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: R$%.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos1);
  printf("Densidade Populacional: %.2f habitantes/Km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  // Exibindo os resultados da segunda carta
  printf("\n------- Carta 2 -------\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %c%02d\n", estado2, codigoNumerico2);
  printf("Nome da Cidade: %s\n", nomeDaCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: R$%.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos2);
  printf("Densidade Populacional: %.2f habitantes/Km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  return 0;
}
