#include <stdio.h>
#include <string.h> // Necessário para strcmp

typedef struct {
    char estado[3];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} CartaCidade;

int main() {
    CartaCidade carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", carta1.estado);
    while (getchar() != '\n');

    printf("Código da carta: ");
    scanf("%s", carta1.codigo);
    while (getchar() != '\n');

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em milhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", carta2.estado);
    while (getchar() != '\n');

    printf("Código da carta: ");
    scanf("%s", carta2.codigo);
    while (getchar() != '\n');

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em milhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    char atributoComparacao[] = "pib";

    printf("\n=== Comparação de Cartas (Atributo: %s) ===\n", atributoComparacao);

    if (strcmp(atributoComparacao, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);
        if (carta1.populacao > carta2.populacao)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else if (strcmp(atributoComparacao, "area") == 0) {
        printf("Carta 1 - %s (%s): %.2f km²\n", carta1.nome, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f km²\n", carta2.nome, carta2.estado, carta2.area);
        if (carta1.area > carta2.area)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else if (strcmp(atributoComparacao, "pib") == 0) {
        printf("Carta 1 - %s (%s): %.2f milhões\n", carta1.nome, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f milhões\n", carta2.nome, carta2.estado, carta2.pib);
        if (carta1.pib > carta2.pib)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else if (strcmp(atributoComparacao, "densidade") == 0) {
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nome, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.nome, carta2.estado, carta2.densidadePopulacional);
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else if (strcmp(atributoComparacao, "pib_per_capita") == 0) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nome, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nome, carta2.estado, carta2.pibPerCapita);
        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Atributo de comparação inválido.\n");
    }

    return 0;
}
