#include <stdio.h>
 
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    //Declaração das variáveis da carta 1
    char estado1, codigo1[10], cidade1[20];
    int ponto_turistico1;
    float area1, pib1, densidade1, pib_per_capita1;
    unsigned long int populacao1;
    float super_poder1;

    //Declaração das variáveis da carta 2
    char estado2, codigo2[10], cidade2[20];
    int ponto_turistico2;
    float area2, pib2, densidade2, pib_per_capita2;
    unsigned long int populacao2;
    float super_poder2;

    //Cadastro da carta 1
    printf("*** CADASTRO DA CARTA 1 ***");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o ponto turístico: ");
    scanf("%d", &ponto_turistico1);

    //Cálculo da carta 1
    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1;
    super_poder1 = (float)populacao1 + pib1 + ponto_turistico1 + pib_per_capita1 + (1.0 / densidade1);

    //Cadastro da carta 2
    printf("*** CADASTRO DA CARTA 2 ***");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex:A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o ponto turístico: ");
    scanf("%d", &ponto_turistico2);

    //Cálculo da carta 2
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2;
    super_poder2 = (float)populacao2 + pib2 + ponto_turistico2 + pib_per_capita2 + (1.0 / densidade2);


    //Exibição das informações da primeira carta
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Túristicos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
  
    //Exibição das informações segunda carta
    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Túristicos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    //Comparação das cartas
    printf("\n***Comparação das Cartas***\n");
    printf("População: Carta %d venceu\n", 1 + (populacao2 > populacao1));
    printf("Área: Carta %d venceu\n", 1 + (area2 > area1));
    printf("PIB: Carta %d venceu\n", 1 + (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu\n", 1 + (ponto_turistico2 > ponto_turistico1));
    printf("Densidade Populacional: Carta %d venceu\n", 1 + (densidade2 < densidade1));
    printf("PIB per Capita: Carta %d venceu\n", 1 + (pib_per_capita2 > pib_per_capita1));
    printf("Super Poder: Carta %d venceu\n", 1 + (super_poder2 > super_poder1));



    

    
    return 0;
}