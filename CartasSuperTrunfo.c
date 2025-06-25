#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numero_pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numero_pontos_turisticos);

    // Exibição das cartas
    printf("\nInformações da primeira carta:\n");
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f milhões de reais\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.numero_pontos_turisticos);

    printf("\nInformações da segunda carta:\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f milhões de reais\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.numero_pontos_turisticos);

    return 0;
}