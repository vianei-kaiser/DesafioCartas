 // ===================================
 // PROGRANA PARA TESTAR VARIAVEIS EM C
 // ===================================
  
#include <stdio.h>


int main() {

    // DECLARAÇÃO DAS VARIÁVEIS

    // Carta 1 - Variaves definida com 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2 - Variaves definida com 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    /* =========================
       ENTRADA DE DADOS - CARTA 1
       ========================= */

    printf("@@@@@@@@@@@@@@@  RESULTADO @@@@@@@@@@@@@@@@@@\n\n");
    printf("===== CADASTRO DA CARTA 1 =====\n");   

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    /* =========================
       ENTRADA DE DADOS - CARTA 2
       ========================= */

    printf("\n===== CADASTRO DA CARTA 2 =====\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    /* =========================
       EXIBIÇÃO DOS DADOS
       ========================= */
    printf("@@@@@@@@@@@@@@@  RESULTADO @@@@@@@@@@@@@@@@@@\n\n");

    printf("\033[31m"); //coloca cor para diferenciar as cartas
    printf("++++++++++++ CARTA 1 +++++++++++\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("\033[31m"); //reseta a função da cor

    printf("\033[34m"); //coloca cor para diferenciar as cartas
    printf("\n******** CARTA 2 ********\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("\033[31m\n\n\n"); //reseta a função da cor


    return 0;
}