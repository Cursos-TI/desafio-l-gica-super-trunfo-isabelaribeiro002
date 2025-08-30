#include <stdio.h>

int main() {

// Carta 1
    char Estado1[50];
    char codigocarta1[4];
    char Nomecidade1[50];   
    unsigned long int populacao1; //guardar grande números sem ser negativo
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;


// Carta 2
    char Estado2[50];
    char codigocarta2[4];
    char Nomecidade2[50];
    unsigned long int populacao2; //guardar grande números sem ser negativo
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    int opcao;

    // ================= MENU INTERATIVO =================

    printf("=== Bem vindo ao jogo Super Trunfo - Países ===\n");
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
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

    //Cálculos da carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // PIB per capita em reais
    
 // Gera o código automaticamente (Carta 1)
/*
    Geração automática do código da carta:
    O código é formado pela primeira letra do estado + um número único para cada carta.
    Por exemplo, se Estado1 = "Acre", o código da Carta 1 será "A01".
    
    Para a Carta 2, se Estado2 = "Bahia", o código será "B02".
    Assim, o código identifica rapidamente a carta pelo estado e pelo número da carta.
*/

    codigocarta1[0] = Estado1[0]; // primeira letra
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

    //Cálculos da carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // PIB per capita em reais
   

 // Gera o código automaticamente (Carta 2)

    codigocarta2[0] = Estado2[0]; // primeira letra
    codigocarta2[1] = '0';
    codigocarta2[2] = '2';
    codigocarta2[3] = '\0';

 // Mostrar Carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigocarta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

 // Mostrar Carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigocarta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    switch (opcao) 
    {
    case 1: // População

        printf("\nComparando População:\n");
        printf("Carta 1 População: %lu\n", populacao1);
        printf("Carta 2 População: %lu\n", populacao2);

        if (populacao1 > populacao2) {
            printf("\n### Carta 1 vence pela População! ###\n");
        } else if (populacao1 < populacao2) {
            printf("\n### Carta 2 vence pela População! ###\n");
        } else {
            printf("\n### Empate na População! ###\n");
        }
        break;
    
    case 2: // Área
    
        printf("\nComparando Área:\n");
        printf("Carta 1 Área: %.2f km²\n", area1);
        printf("Carta 2 Área: %.2f km²\n", area2);

        if (area1 > area2) {
            printf("\n### Carta 1 vence pela Área! ###\n");
        } else if (area1 < area2) {
            printf("\n### Carta 2 vence pela Área! ###\n");
        } else {
            printf("\n### Empate na Área! ###\n");
        }
        break;

    case 3: // PIB

        printf("\nComparando PIB:\n");
        printf("Carta 1 PIB: %.2f bilhões de reais\n", pib1);
        printf("Carta 2 PIB: %.2f bilhões de reais\n", pib2);

        if (pib1 > pib2) {
            printf("\n### Carta 1 vence pelo PIB! ###\n");
        } else if (pib1 < pib2) {
            printf("\n### Carta 2 vence pelo PIB! ###\n");
        } else {
            printf("\n### Empate no PIB! ###\n");
        }
        break;

    case 4: // Pontos turísticos
        printf("\nComparando Pontos Turísticos:\n");
        printf("Carta 1 Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Carta 2 Pontos Turísticos: %d\n", pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("\n### Carta 1 vence pelos Pontos Turísticos! ###\n");
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("\n### Carta 2 vence pelos Pontos Turísticos! ###\n");
        } else {
            printf("\n### Empate nos Pontos Turísticos! ###\n");
        }
        break;

    case 5: // Densidade (menor vence!)
    
        if (densidadePopulacional1 < densidadePopulacional2) {
        if (densidadePopulacional1 != densidadePopulacional2) {
        printf("Vencedora: %s\n", Nomecidade1);
    }
    }   else {
        if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Vencedora: %s\n", Nomecidade2);
    }   else {
        printf("Empate!\n");
    }
}           break;
    
    default:  
        printf("Opção inválida! Escolha entre 1 e 5.\n");
    }
        return 0;
}
    

