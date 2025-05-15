#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo

    char estado1;
    char codigo1[4];           // Exemplo: "A01"
    char nomeCidade1[50];      // Nome da cidade
    int populacao1;            // Número de habitantes
    float area1;               // Área em km²
    float pib1;                // PIB em bilhões de reais
    int pontosTuristicos1;     // Número de pontos turísticos
    float densidadePopulacional1; // Habitantes por km²
    float pibPerCapita1;        // PIB por pessoa em reais
    float superPoder1;


    char estado2;
    char codigo2[4];           // Exemplo: "A01"
    char nomeCidade2[50];      // Nome da cidade
    int populacao2;            // Número de habitantes
    float area2;               // Área em km²
    float pib2;                // PIB em bilhões de reais
    int pontosTuristicos2;     // Número de pontos turísticos
    float densidadePopulacional2; // Habitantes por km²
    float pibPerCapita2;          // PIB por pessoa em reais
    float superPoder2;

    int escolhaJogador1;
    int escolhaJogador2;
    int resultado1;
    int resultado2;

int main() {

    // Entrada dos dados da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("--------------------\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    getchar();

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar();

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeCidade1);


    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

  

    // Entrada dos dados da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("--------------------\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    getchar();

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

      // Cálculos para Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // Cálculos para Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);



    printf("Agora escolha qual atributo das cartas você deseja comparar: \n [1] População \n [2] Área PIB \n [3] Número de pontos turísticos \n [4] Densidade demográfica  ");
    scanf("%d", &escolhaJogador1);
     // Resultados
    switch (escolhaJogador1)
    {
    case 1:
      if(populacao1 > populacao2) {
        printf("A cidade %s ganhou! com a populacao de %d", nomeCidade1, populacao1);
        resultado1++;
      } else {
        printf("A cidade %s ganhou! com a populacao de %d", nomeCidade2, populacao2);
      }
      break;
    case 2:
      if(pib1 > pib2) {
        printf("A cidade %s ganhou! com o pib de %f", nomeCidade1, pib1);
        resultado1++;
      } else {
        printf("A cidade %s ganhou! com o pib de %f", nomeCidade2, pib2);
      }
      break;

    case 3:
      if(pontosTuristicos1 > pontosTuristicos2) {
        printf("A cidade %s ganhou! com %d pontos turisticos", nomeCidade1, pontosTuristicos1);
        resultado1++;
      } else {
        printf("A cidade %s ganhou! com %d pontos turisticos", nomeCidade2, pontosTuristicos1);
      }
      break;
    case 4:
      if(densidadePopulacional1 < densidadePopulacional2) {
        printf("A cidade %s ganhou! com a Densidade de %f", nomeCidade1, densidadePopulacional1);
        resultado1++;
      } else {
        printf("A cidade %s ganhou! com a Densidade de %f", nomeCidade2, densidadePopulacional2);
      }
      break;
    case 5:
      if(superPoder1 > superPoder2) {
        printf("A cidade %s ganhou! com o poder de %f", nomeCidade1, superPoder1);
        resultado1++;
      } else {
        printf("A cidade %s ganhou! com a poder de %f", nomeCidade2, superPoder2);
      }
      break;
    }
    

  printf("Agora escolha o segundo atributo de comparação: \n [1] População \n [2] Área PIB \n [3] Número de pontos turísticos \n [4] Densidade demográfica");
  scanf("%d", &escolhaJogador2);

  if(escolhaJogador1 == escolhaJogador2) {
    printf("Você escolheu o mesmo atributo!");
  }

   switch (escolhaJogador2)
    {
    case 1:
      if(populacao1 > populacao2) {
        printf("A cidade %s ganhou! com a populacao de %d", nomeCidade1, populacao1);
        resultado2++;
      } else {
        printf("A cidade %s ganhou! com a populacao de %d", nomeCidade2, populacao2);
      }
      break;
    case 2:
      if(pib1 > pib2) {
        printf("A cidade %s ganhou! com o pib de %f", nomeCidade1, pib1);
        resultado2++;
      } else {
        printf("A cidade %s ganhou! com o pib de %f", nomeCidade2, pib2);
      }
      break;

    case 3:
      if(pontosTuristicos1 > pontosTuristicos2) {
        printf("A cidade %s ganhou! com %d pontos turisticos", nomeCidade1, pontosTuristicos1);
        resultado2++;
      } else {
        printf("A cidade %s ganhou! com %d pontos turisticos", nomeCidade2, pontosTuristicos1);
      }
      break;
    case 4:
      if(densidadePopulacional1 < densidadePopulacional2) {
        printf("A cidade %s ganhou! com a Densidade de %f", nomeCidade1, densidadePopulacional1);
        resultado2++;
      } else {
        printf("A cidade %s ganhou! com a Densidade de %f", nomeCidade2, densidadePopulacional2);
      }
      break;
    case 5:
      if(superPoder1 > superPoder2) {
        printf("A cidade %s ganhou! com o poder de %f", nomeCidade1, superPoder1);
        resultado2++;
      } else {
        printf("A cidade %s ganhou! com a poder de %f", nomeCidade2, superPoder2);
      }
      break;
    }

    if(resultado1 && resultado2){
      printf("Parabéns, você venceu!");
    } else if(resultado1 != resultado2) {
      printf("Empatou!");
    } else {
      printf("Você perdeu!");
    }

    


    return 0;
}