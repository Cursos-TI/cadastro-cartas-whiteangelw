#include <stdio.h>

int main()
{  
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional, pibPerCapita, densidadePopulacional2, pibPerCapita2;

    
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
    
    pibPerCapita = pib1 / populacao1;
    printf("PIB Per Capita: %f", pibPerCapita);

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

    densidadePopulacional2 =  populacao2 / area2;
    printf("Densidade Populacional: %f\n", densidadePopulacional2);

    pibPerCapita2 = pib2 / populacao2;
    printf("PIB Per Capita: %f\n", pibPerCapita2);

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
    printf("PIB Per Capita: %f\n", pibPerCapita);

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

    return 0;
}
