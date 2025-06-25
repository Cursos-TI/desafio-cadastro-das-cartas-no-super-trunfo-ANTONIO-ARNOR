#include <stdio.h>

typedef struct {
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

void calcular_atributos_derivados(Carta *carta) {
    carta->densidade_populacional = (float)carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / (float)carta->populacao;
}

int main() {
    Carta carta1, carta2;

    // Coleta de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em milhões de unidades monetárias): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.num_pontos_turisticos);

    // Coleta de dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em milhões de unidades monetárias): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.num_pontos_turisticos);

    // Cálculo dos atributos derivados para a primeira carta
    calcular_atributos_derivados(&carta1);

    // Cálculo dos atributos derivados para a segunda carta
    calcular_atributos_derivados(&carta2);

    // Impressão dos dados da primeira carta
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);

    // Impressão dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);

    return 0;
}