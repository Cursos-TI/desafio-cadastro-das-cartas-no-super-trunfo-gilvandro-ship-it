#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[10] = "A01";
    int populacao1 = 1500000;
    float area1 = 980.5;
    float pib1 = 450000.60;
    int pontosTuristicos1 = 6;

    // Carta 2
    char codigo2[10] = "B02";
    int populacao2 = 2000000;
    float area2 = 1100.7;
    float pib2 = 500000.70;
    int pontosTuristicos2 = 2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Codigo (A01): ");
    scanf("%s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Codigo (B02): ");
    scanf("%s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo resultados
    printf("\n--- Cartas cadastradas ---\n");
    printf("Carta 1 - Codigo: %s | Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           codigo1, populacao1, area1, pib1, pontosTuristicos1);
    printf("Carta 2 - Codigo: %s | Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d\n",
           codigo2, populacao2, area2, pib2, pontosTuristicos2);

    return 0;