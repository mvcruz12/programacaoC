#include <stdio.h>

int main(){

    int pontosTuristicos1;
    int pontosTuristicos2;
    int populacao1;
    int populacao2;
    float pib1;
    float pib2;
    float area1;
    float area2;
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[5];
    char codigo2[5];
    char cidade1[20];
    char cidade2[20];
    
    printf("Desafio Cartas Super Trunfo\n\n");

    printf("Digite o código da cidade 1: \n");
    scanf("%s", &codigo1);

    printf("Digite o código da cidade 2: \n");
    scanf("%s", &codigo2);

    printf("Dgite o nome da cidade 1: \n");
    scanf("%s", &cidade1);

    printf("Dgite o nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Dgite a população da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Dgite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area1);

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;

}
