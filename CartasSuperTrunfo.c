#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado;
    char codigo[10];
    char cidade[20];
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

    printf("Nome/estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Nome/Cidade: %s\n",cidade);
    printf("Populção: %d\n", populacao);
    printf("Area em km²: %f\n", areaemkm²);
    printf("Pib: %f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);

    return 0;

} 
