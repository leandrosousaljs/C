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

  printf("Digite o nome da cidade (sem espaços): ");
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
  
  printf("Digite o nome da cidade (sem espaços): ");
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

  // Exibindo os valores da primeira carta
  printf("\n------- Carta 1 -------\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %s\n", codigoDaCarta1);
  printf("Nome da Cidade: %s\n", nomeDaCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos1);
  printf("Densidade Populacional: %.2f habitantes/Km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  // Exibindo os valores da segunda carta
  printf("\n------- Carta 2 -------\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigoDaCarta2);
  printf("Nome da Cidade: %s\n", nomeDaCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numDePontosTuristicos2);
  printf("Densidade Populacional: %.2f habitantes/Km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // Comparando atributos das cartas
  printf("\n------- Comparação -------\n");

  //Variáveis para armazenar as escolhas
  int escolha1, escolha2;

  // Menu de comparação
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");

  // Pedindo ao usuário que escolha uma opção
  printf("\nEscolha um atributo para comparar: ");
  scanf("%d", &escolha1);

  //Variáveis para armazenar os valores dos atributos escolhidos
  unsigned long int valorPrimeiraEscolhaCarta1, valorPrimeiraEscolhaCarta2;
  unsigned long int valorSegundaEscolhaCarta1, valorSegundaEscolhaCarta2;

  // Definindo as opções e suas lógicas
  switch (escolha1) {
  case 1:
    printf("População: \n");
    printf("Carta 1 - %s: %lu\n", nomeDaCidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", nomeDaCidade2, populacao2);
    if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (populacao2 > populacao1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
      printf("Houve um empate!\n");
    }
    valorPrimeiraEscolhaCarta1 = populacao1;
    valorPrimeiraEscolhaCarta2 = populacao2;
    break;

  case 2:
    printf("Área: \n");
    printf("Carta 1 - %s: %.2f Km²\n", nomeDaCidade1, area1);
    printf("Carta 2 - %s: %.2f Km²\n", nomeDaCidade2, area2);
    if (area1 > area2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (area2 > area1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
      printf("Houve um empate!\n");
    }
    valorPrimeiraEscolhaCarta1 = area1;
    valorPrimeiraEscolhaCarta2 = area2;
    break;

  case 3:
    printf("PIB: \n");
    printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeDaCidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeDaCidade2, pib2);
    if (pib1 > pib2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (pib2 > pib1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
      printf("Houve um empate!\n");
    }
    valorPrimeiraEscolhaCarta1 = pib1;
    valorPrimeiraEscolhaCarta2 = pib2;
    break;

  case 4:
    printf("Pontos Turísticos: \n");
    printf("Carta 1 - %s: %d\n", nomeDaCidade1, numDePontosTuristicos1);
    printf("Carta 2 - %s: %d\n", nomeDaCidade2, numDePontosTuristicos2);
    if (numDePontosTuristicos1 > numDePontosTuristicos2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (numDePontosTuristicos2 > numDePontosTuristicos1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
      printf("Houve um empate!\n");
    }
    valorPrimeiraEscolhaCarta1 = numDePontosTuristicos1;
    valorPrimeiraEscolhaCarta2 = numDePontosTuristicos2;
    break;

  case 5:
    printf("Densidade Populacional: \n");
    printf("Carta 1 - %s: %.2f habitantes/Km²\n", nomeDaCidade1, densidadePopulacional1);
    printf("Carta 2 - %s: %.2f habitantes/Km²\n", nomeDaCidade2, densidadePopulacional2);
    if (densidadePopulacional1 < densidadePopulacional2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
      printf("Houve um empate!\n");
    }
    valorPrimeiraEscolhaCarta1 = densidadePopulacional1;
    valorPrimeiraEscolhaCarta2 = densidadePopulacional2;
    break;

  case 6:
    printf("PIB per Capita: \n");
    printf("Carta 1 - %s: %.2f reais\n", nomeDaCidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.2f reais\n", nomeDaCidade2, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
      printf("Houve um empate!\n");
    }
    valorPrimeiraEscolhaCarta1 = pibPerCapita1;
    valorPrimeiraEscolhaCarta2 = pibPerCapita2;
    break;

  case 7:
    printf("Super Poder: \n");
    printf("Carta 1 - %s: %.2f\n", nomeDaCidade1, superPoder1);
    printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, superPoder2);
    if (superPoder1 > superPoder2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else if (superPoder2 > superPoder1) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    } else {
      printf("Houve um empate!\n");
    }
    valorPrimeiraEscolhaCarta1 = superPoder1;
    valorPrimeiraEscolhaCarta2 = superPoder2;
    break;

  default:
    printf("Opção inválida!\n");
    break;
  }

  printf("\nEscolha outro atributo para comparar: ");
  scanf("%d", &escolha2);

  if (escolha1 == escolha2) {
    printf("Você escolheu o mesmo atributo para comparar!\n");
  } else {
    switch (escolha2) {
    case 1:
      printf("População: \n");
      printf("Carta 1 - %s: %lu\n", nomeDaCidade1, populacao1);
      printf("Carta 2 - %s: %lu\n", nomeDaCidade2, populacao2);
      if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
      } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
      } else {
        printf("Houve um empate!\n");
      }
      valorSegundaEscolhaCarta1 = populacao1;
      valorSegundaEscolhaCarta2 = populacao2;
      break;

    case 2:
      printf("Área: \n");
      printf("Carta 1 - %s: %.2f Km²\n", nomeDaCidade1, area1);
      printf("Carta 2 - %s: %.2f Km²\n", nomeDaCidade2, area2);
      if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
      } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
      } else {
        printf("Houve um empate!\n");
      }
      valorSegundaEscolhaCarta1 = area1;
      valorSegundaEscolhaCarta2 = area2;
      break;

    case 3:
      printf("PIB: \n");
      printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeDaCidade1, pib1);
      printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeDaCidade2, pib2);
      if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
      } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
      } else {
        printf("Houve um empate!\n");
      }
      valorSegundaEscolhaCarta1 = pib1;
      valorSegundaEscolhaCarta2 = pib2;
      break;

    case 4:
      printf("Pontos Turísticos: \n");
      printf("Carta 1 - %s: %d\n", nomeDaCidade1, numDePontosTuristicos1);
      printf("Carta 2 - %s: %d\n", nomeDaCidade2, numDePontosTuristicos2);
      if (numDePontosTuristicos1 > numDePontosTuristicos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
      } else if (numDePontosTuristicos2 > numDePontosTuristicos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
      } else {
        printf("Houve um empate!\n");
      }
      valorSegundaEscolhaCarta1 = numDePontosTuristicos1;
      valorSegundaEscolhaCarta2 = numDePontosTuristicos2;
      break;

    case 5:
      printf("Densidade Populacional: \n");
      printf("Carta 1 - %s: %.2f habitantes/Km²\n", nomeDaCidade1, densidadePopulacional1);
      printf("Carta 2 - %s: %.2f habitantes/Km²\n", nomeDaCidade2, densidadePopulacional2);
      if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
      } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
      } else {
        printf("Houve um empate!\n");
      }
      valorSegundaEscolhaCarta1 = densidadePopulacional1;
      valorSegundaEscolhaCarta2 = densidadePopulacional2;
      break;

    case 6:
      printf("PIB per Capita: \n");
      printf("Carta 1 - %s: %.2f reais\n", nomeDaCidade1, pibPerCapita1);
      printf("Carta 2 - %s: %.2f reais\n", nomeDaCidade2, pibPerCapita2);
      if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
      } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
      } else {
        printf("Houve um empate!\n");
      }
      valorSegundaEscolhaCarta1 = pibPerCapita1;
      valorSegundaEscolhaCarta2 = pibPerCapita2;
      break;

    case 7:
      printf("Super Poder: \n");
      printf("Carta 1 - %s: %.2f\n", nomeDaCidade1, superPoder1);
      printf("Carta 2 - %s: %.2f\n", nomeDaCidade2, superPoder2);
      if (superPoder1 > superPoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
      } else if (superPoder2 > superPoder1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
      } else {
        printf("Houve um empate!\n");
      }
      valorSegundaEscolhaCarta1 = superPoder1;
      valorSegundaEscolhaCarta2 = superPoder2;
      break;

    default:
      printf("Opção inválida!\n");
      break;
    }
  }

  //Somando os valores dos dois atributos escolhidos
  unsigned long int somaCartas1 = valorPrimeiraEscolhaCarta1 + valorSegundaEscolhaCarta1;
  unsigned long int somaCartas2 = valorPrimeiraEscolhaCarta2 + valorSegundaEscolhaCarta2;
  printf("\n------- Soma dos Atributos Escolhidos -------\n");
  printf("Soma dos atributos da Carta 1 (%s): %lu\n", nomeDaCidade1, somaCartas1);
  printf("Soma dos atributos da Carta 2 (%s): %lu\n", nomeDaCidade2, somaCartas2);
  if (somaCartas1 > somaCartas2) {
    printf("Resultado Final: Carta 1 (%s) venceu na soma dos atributos!\n", nomeDaCidade1);
  } else if (somaCartas2 > somaCartas1) {
    printf("Resultado Final: Carta 2 (%s) venceu na soma dos atributos!\n", nomeDaCidade2);
  } else {
    printf("Houve um empate na soma dos atributos!\n");
  }

  return 0;
}
