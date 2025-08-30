#include <stdio.h>

int main() {

// Carta 1
    char Estado1[50];
    char codigocarta1[4];
    char Nomecidade1[50];   
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

// Carta 2
    char Estado2[50];
    char codigocarta2[4];
    char Nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    int opcao, opcao2;
    int resultado1, resultado2;

    char *atributos[6] = {"", "População", "Área", "PIB", "Pontos Turísticos", "Densidade Demográfica"};
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;

    // ================= MENU INTERATIVO =================
    printf("=== Bem vindo ao jogo Super Trunfo - Países ===");
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

// Entrada Carta 1
    printf("Digite o Estado da Carta 1 (A-H):  \n");
    scanf(" %s", &Estado1);

    printf("Digite o nome da Cidade da Carta 1: \n");
    scanf(" %[^\n]", Nomecidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 
    
    codigocarta1[0] = Estado1[0];
    codigocarta1[1] = '0';
    codigocarta1[2] = '1';
    codigocarta1[3] = '\0';

// Entrada Carta 2
    printf("Digite o Estado da Carta 2 (A-H):  \n");
    scanf(" %s", &Estado2);

    printf("Digite o nome da Cidade da Carta 2: \n");
    scanf(" %[^\n]", Nomecidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; 

    codigocarta2[0] = Estado2[0];
    codigocarta2[1] = '0';
    codigocarta2[2] = '2';
    codigocarta2[3] = '\0';

// ================= Primeira comparação =================
    if (opcao == 1) {
        valor1_c1 = populacao1; valor1_c2 = populacao2;
        resultado1 = populacao1 > populacao2 ? 1 : 0;

        if (resultado1 == 1)
            printf("### Carta 1 vence pela População! ###\n");
        else if (resultado1 == 0 && populacao1 != populacao2)
            printf("### Carta 2 vence pela População! ###\n");
        else
            printf("### Empate na População! ###\n");

    } else if (opcao == 2) {
        valor1_c1 = area1; valor1_c2 = area2;
        resultado1 = area1 < area2 ? 1 : 0;

        if (resultado1 == 1)
            printf("### Carta 1 vence pela Área! ###\n");
        else if (resultado1 == 0 && area1 != area2)
            printf("### Carta 2 vence pela Área! ###\n");
        else
            printf("### Empate na Área! ###\n");

    } else if (opcao == 3) {
        valor1_c1 = pib1; valor1_c2 = pib2;
        resultado1 = pib1 > pib2 ? 1 : 0;

        if (resultado1 == 1)
            printf("### Carta 1 vence pelo PIB! ###\n");
        else if (resultado1 == 0 && pib1 != pib2)
            printf("### Carta 2 vence pelo PIB! ###\n");
        else
            printf("### Empate no PIB! ###\n");

    } else if (opcao == 4) {
        valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2;
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;

        if (resultado1 == 1)
            printf("### Carta 1 vence pelos Pontos Turísticos! ###\n");
        else if (resultado1 == 0 && pontosTuristicos1 != pontosTuristicos2)
            printf("### Carta 2 vence pelos Pontos Turísticos! ###\n");
        else
            printf("### Empate nos Pontos Turísticos! ###\n");

    } else if (opcao == 5) {
        valor1_c1 = densidadePopulacional1; valor1_c2 = densidadePopulacional2;
        resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;

        if (resultado1 == 1)
            printf("### Carta 1 vence pela Densidade Demográfica! ###\n");
        else if (resultado1 == 0 && densidadePopulacional1 != densidadePopulacional2)
            printf("### Carta 2 vence pela Densidade Demográfica! ###\n");
        else
            printf("### Empate na Densidade Demográfica! ###\n");
    }

// ================= Segunda comparação =================
    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    scanf("%d", &opcao2);

    if (opcao2 == 1) {
        valor2_c1 = populacao1; valor2_c2 = populacao2;
        resultado2 = populacao1 > populacao2 ? 1 : 0;

        if (resultado2 == 1)
            printf("### Carta 1 vence pela População! ###\n");

        else if (resultado2 == 0 && populacao1 != populacao2)

            printf("### Carta 2 vence pela População! ###\n");
            
        else
            printf("### Empate na População! ###\n");

    } else if (opcao2 == 2) {
        valor2_c1 = area1; valor2_c2 = area2;
        resultado2 = area1 < area2 ? 1 : 0;

        if (resultado2 == 1)
            printf("### Carta 1 vence pela Área! ###\n");

        else if (resultado2 == 0 && area1 != area2)

            printf("### Carta 2 vence pela Área! ###\n");

        else
            printf("### Empate na Área! ###\n");

    } else if (opcao2 == 3) {
        valor2_c1 = pib1; valor2_c2 = pib2;
        resultado2 = pib1 > pib2 ? 1 : 0;

        if (resultado2 == 1)
            printf("### Carta 1 vence pelo PIB! ###\n");

        else if (resultado2 == 0 && pib1 != pib2)
            printf("### Carta 2 vence pelo PIB! ###\n");

        else
            printf("### Empate no PIB! ###\n");

    } else if (opcao2 == 4) {
        valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2;
        resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;

        if (resultado2 == 1)
            printf("### Carta 1 vence pelos Pontos Turísticos! ###\n");

        else if (resultado2 == 0 && pontosTuristicos1 != pontosTuristicos2)
            printf("### Carta 2 vence pelos Pontos Turísticos! ###\n");

        else
            printf("### Empate nos Pontos Turísticos! ###\n");

    } else if (opcao2 == 5) {
        valor2_c1 = densidadePopulacional1; valor2_c2 = densidadePopulacional2;
        resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;

        if (resultado2 == 1)
            printf("### Carta 1 vence pela Densidade Demográfica! ###\n");
        else if (resultado2 == 0 && densidadePopulacional1 != densidadePopulacional2)
            printf("### Carta 2 vence pela Densidade Demográfica! ###\n");
        else
            printf("### Empate na Densidade Demográfica! ###\n");
    }

// ================= Exibição final organizada =================
    int pontos_c1 = 0, pontos_c2 = 0; // Cada vez que uma carta vencer a comparação de um atributo, soma 1 ponto pra ela.

    if (resultado1 == 1) pontos_c1++;
    else if (resultado1 == 0 && valor1_c1 != valor1_c2) pontos_c2++;

    if (resultado2 == 1) pontos_c1++;
    else if (resultado2 == 0 && valor2_c1 != valor2_c2) pontos_c2++;

    printf("\n=== RESUMO FINAL ===\n");

    printf("Carta 1 - %s (%s)\n", Nomecidade1, Estado1);
    printf(" -> %s: %.2f\n", atributos[opcao], valor1_c1);
    printf(" -> %s: %.2f\n", atributos[opcao2], valor2_c1);
    printf(" -> Pontos totais: %d\n", pontos_c1);

    printf("\nCarta 2 - %s (%s)\n", Nomecidade2, Estado2);
    printf(" -> %s: %.2f\n", atributos[opcao], valor1_c2);
    printf(" -> %s: %.2f\n", atributos[opcao2], valor2_c2);
    printf(" -> Pontos totais: %d\n", pontos_c2);

    printf("\n=== Resultado Final ===\n");
    if (pontos_c1 > pontos_c2) 
        printf("### Carta 1 venceu no geral! ###\n");
    else if (pontos_c2 > pontos_c1) 
        printf("### Carta 2 venceu no geral! ###\n");
    else 
        printf("### Empate total! ###\n");

    return 0;
}
