#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo!\n");
    // Carta 1
    char codigo1[4];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Carta 2
    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Codigo:");
    scanf("%s", codigo1);
    printf("Populacao:");
    scanf("%d", &populacao1);
    printf("Area (km2):");
    scanf("%f", &area1);
    printf("PIB (em milhoes):");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Codigo:");
    scanf("%s", codigo2);
    printf("Populacao:");
    scanf("%d", &populacao2);
    printf("Area (km2):");
    scanf("%f", &area2);
    printf("PIB (em milhoes):");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1;

    // Cálculos carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2;

    // Exibição dos dados
    printf("\n--- CARTA 1 ---\n");
    printf("Codigo:%s\n", codigo1);
    printf("Populacao:%d\n", populacao1);
    printf("Area:%.2f km2\n", area1);
    printf("PIB:%.2f milhoes\n", pib1);
    printf("Pontos Turisticos:%d\n", pontosTuristicos1);
    printf("Densidade Populacional:%.2f hab/km2\n", densidade1);
    printf("PIB per Capita:%.2f\n", pibPerCapita1);
    printf("Super Poder:%.2f\n", superPoder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Codigo:%s\n", codigo2);
    printf("Populacao:%d\n", populacao2);
    printf("Area:%.2f km2\n", area2);
    printf("PIB:%.2f milhoes\n", pib2);
    printf("Pontos Turisticos:%d\n", pontosTuristicos2);
    printf("Densidade Populacional:%.2f hab/km2\n", densidade2);
    printf("PIB per Capita:%.2f\n", pibPerCapita2);
    printf("Super Poder:%.2f\n", superPoder2);

    // Comparações
    printf("\n--- RESULTADOS DA COMPARACAO ---\n");

    printf("Populacao: Carta %s venceu!\n",
           (populacao1 > populacao2) ? codigo1 : codigo2);

    printf("Area: Carta %s venceu!\n",
           (area1 > area2) ? codigo1 : codigo2);

    printf("PIB: Carta %s venceu!\n",
           (pib1 > pib2) ? codigo1 : codigo2);

    printf("PIB per Capita: Carta %s venceu!\n",
           (pibPerCapita1 > pibPerCapita2) ? codigo1 : codigo2);

    printf("Pontos Turisticos: Carta %s venceu!\n",
           (pontosTuristicos1 > pontosTuristicos2) ? codigo1 : codigo2);

    printf("Densidade Populacional (MENOR vence): Carta %s venceu!\n",
           (densidade1 < densidade2) ? codigo1 : codigo2);

    printf("Super Poder: Carta %s venceu!\n",
           (superPoder1 > superPoder2) ? codigo1 : codigo2);

    return 0;
}