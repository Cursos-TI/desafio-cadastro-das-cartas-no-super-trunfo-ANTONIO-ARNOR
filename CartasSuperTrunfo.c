#include <stdio.h>

typedef struct {
    char estado;
    char codigo;
    char nome;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("Digite a populacao: ");
    scanf("%d", &carta->populacao);
    printf("Digite a area: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta->pontosTuristicos);

    //Calculo dos atributos derivados
    carta->densidadePopulacional = (float)carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

void exibirCarta(Carta carta) {
    printf("População: %d\n", carta.populacao);
    printf("Area: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta.pibPerCapita);
}

int compararCartas(Carta carta1, Carta carta2) {
    //Lógica de comparação - pode ser expandida com outros critérios
    int pontuacao1 = carta1.populacao + carta1.pontosTuristicos + (int)(carta1.pibPerCapita / 1000);
    int pontuacao2 = carta2.populacao + carta2.pontosTuristicos + (int)(carta2.pibPerCapita / 1000);
    return pontuacao1 > pontuacao2; //Retorna 1 se carta1 vence, 0 caso contrario.
}

int calcularSuperPoder(Carta carta){
    //Lógica do super poder - pode ser expandida
    return (int)(carta.densidadePopulacional * carta.pibPerCapita) % 100;
}

int main() {
    Carta carta1, carta2;

    printf("Cadastrando a primeira carta:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastrando a segunda carta:\n");
    cadastrarCarta(&carta2);

    printf("\nInformacoes da primeira carta:\n");
    exibirCarta(carta1);

    printf("\nInformacoes da segunda carta:\n");
    exibirCarta(carta2);

    // Comparação entre cartas
    if (compararCartas(carta1, carta2)) {
        printf("\nA primeira carta venceu a comparacao.\n");
    } else {
        printf("\nA segunda carta venceu a comparacao.\n");
    }

    // Cálculo do super poder
    printf("\nSuper Poder da primeira carta: %d\n", calcularSuperPoder(carta1));
    printf("Super Poder da segunda carta: %d\n", calcularSuperPoder(carta2));

    return 0;
}