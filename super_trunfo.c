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


     // Resultados
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);


    return 0;
}