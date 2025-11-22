#include <stdio.h>

int main()
{  
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional, pibPerCapita1, densidadePopulacional2, pibPerCapita2;
    float superPoder1, superPoder2;

    int resultado;
    
    //Carta 1:
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidadePopulacional =  populacao1 / area1;
    printf("Densidade Populacional: %f \n", densidadePopulacional);
    
    densidadePopulacional = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;


    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1.0f / densidadePopulacional);
    printf("superPoder: %f \n", superPoder1);



    // Carta 2:
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);
    printf("superPoder: %f \n", superPoder2);

    // Exibir Cartas
    printf("\n\n=== CARTAS CADASTRADAS ===\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %f\n", densidadePopulacional);
    printf("PIB Per Capita: %f\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %f\n", densidadePopulacional2);
    printf("PIB Per Capita: %f\n", pibPerCapita2); 

    // Comparaçao de cartas

     printf("\n\n=== COMPARACAO DE CARTAS ===\n");

    // População (maior vence)
    resultado = (populacao1 > populacao2);
    printf("Populacao: Carta (%d) venceu \n", resultado);

    // Area (maior vence)
    resultado = (area1 > area2);
    printf("Area: Carta (%d) venceu \n", resultado);

    // PIB (maior vence)
    resultado = (pib1 > pib2);
    printf("PIB: Carta (%d) venceu \n", resultado);

    // Pontos Turisticos (maior vence)
    resultado = (pontos1 > pontos2);
    printf("Pontos Turisticos: Carta (%d) venceu \n", resultado);

    // Densidade (menor vence)
    resultado = (densidadePopulacional < densidadePopulacional2);
    printf("Densidade Populacional: Carta (%d) venceu \n", resultado);

    // PIB per Capita (maior vence)
    resultado = (pibPerCapita1 > pibPerCapita2);
    printf("PIB per Capita: Carta (%d) venceu \n", resultado);

    // Super Poder (maior vence)
    resultado = (superPoder1 > superPoder2);
    printf("Super Poder: Carta (%d) venceu \n", resultado);

    // Resultado
    // 1 significa que a Carta 1 venceu  ||  0 significa que a Carta 2 venceu

    return 0;
}