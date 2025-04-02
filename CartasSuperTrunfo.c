#include <stdio.h>

// Desafio Super Trunfo 
// Tema 1 - Cadastro das Cartas
//Teste MariaJaqueline


int main() {
    printf("Desafio Super Trunfo!\n");
    printf("\n=========================\n");

    // Declaração das variáveis para duas cartas
    char codigo1[100], estado1[100], cidade1[100];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    char codigo2[100], estado2[100], cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Cadastro da Carta 1
    printf("Carta 1!\n");

    printf("Digite o código da primeira Carta (ex:A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o estado: "); 
    scanf("%s", estado1);
   
    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n====================\n");

    // Cadastro da Carta 2
    printf("Carta 2!\n");

    printf("Digite o código da segunda Carta (ex:B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o estado: "); 
    scanf("%s", estado2);
   
    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados Cadastrados
    printf("\n============================");
    printf("\nDados das cartas cadastradas:");
    printf("\n============================\n");

    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}

