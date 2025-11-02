#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado[30];
    char codigo[30];
    char cidade[50];
    int populacao;
    float areaemkm²;
    float pib;
    int pontosturisticos;

    printf("Desafio Super Trunfo: \n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Codigo: \n");
    scanf("%d", &codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a Populçao: \n");
    scanf("%d", &populacao);

    printf("Digite a Area em Km²: \n");
    scanf("%f", &areaemkm²);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("Digite o Numero de Pontos Turisticos \n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Cidade: %s\n",cidade);
    printf("Populção: %d\n", populacao);
    printf("Area em km²: %.2f\n", areaemkm²);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("\n");
    
    printf("Desafio Super Trunfo 1!\n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo: \n");
    scanf("%d", &codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a População: \n");
    scanf("%f", &populacao);

    printf("Digite a Area em Km²: \n");
    scanf("%f", &areaemkm²);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("Digite o Numero de pontos Turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area em Km²: %.2f\n", areaemkm²);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);

    return 0;

} 
