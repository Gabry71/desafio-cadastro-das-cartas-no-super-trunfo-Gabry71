#include <stdio.h>

int main() {
    // ======CARTA 1======
    char estado1[3];              // estado (A-H)
    char codigo1[4];              // código (ex: A01)
    char cidade1[50];             // nome da cidade
    int populacao1;               // população
    float area1;                  // área em km²
    float pib1;                   // PIB
    int pontosTuristicos1;        // número de pontos turísticos

    // ====== CARTA 2 ======
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== Entrada de dados (Carta 1) =====
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado1); 
    printf("Codigo da Carta (A01): ");
    scanf(" %3s", &codigo1); 
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]%*c", cidade1);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("area (km2): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    printf("\n");

    // ===== Entrada de dados (Carta 2) =====
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado2);
    printf("Codigo da Carta (B02): ");
    scanf(" %3s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]%*c", cidade2);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("area (km2): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    printf("\n");

    // ===== Saída formatada =====
    printf("--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
