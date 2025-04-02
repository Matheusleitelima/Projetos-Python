#include <stdio.h>

int main() {
    char nomecidade1[20], nomecidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int nturisticos1, nturisticos2;
    float pibpercapita1, pibpercapita2;
    float densidadepopulacional1, densidadepopulacional2;

    // Entrada dos dados
    printf("Carta 1\n");
    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]", nomecidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &nturisticos1);

    pibpercapita1 = pib1 / populacao1;
    densidadepopulacional1 = populacao1 / area1;

    // Entrada dos dados
    printf("\nCarta 2\n");
    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]", nomecidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &nturisticos2);

    pibpercapita2 = pib2 / populacao2;
    densidadepopulacional2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1carta1, valor1carta2, valor2carta1, valor2carta2;
    char *nomeatributo1, *nomeatributo2;


    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - PIB per capita\n6 - Densidade populacional\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1: valor1carta1 = populacao1; valor1carta2 = populacao2; nomeatributo1 = "População"; break;
        case 2: valor1carta1 = area1; valor1carta2 = area2; nomeatributo1 = "Área"; break;
        case 3: valor1carta1 = pib1; valor1carta2 = pib2; nomeatributo1 = "PIB"; break;
        case 4: valor1carta1 = nturisticos1; valor1carta2 = nturisticos2; nomeatributo1 = "Pontos turísticos"; break;
        case 5: valor1carta1 = pibpercapita1; valor1carta2 = pibpercapita2; nomeatributo1 = "PIB per capita"; break;
        case 6: valor1carta1 = densidadepopulacional1; valor1carta2 = densidadepopulacional2; nomeatributo1 = "Densidade populacional"; break;
        default: printf("Opção inválida\n"); return 1;
    }


    printf("\nEscolha o segundo atributo para comparar:\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos turísticos\n");
    if (atributo1 != 5) printf("5 - PIB per capita\n");
    if (atributo1 != 6) printf("6 - Densidade populacional\n");

    scanf("%d", &atributo2);

    switch (atributo2) {
        case 1: valor2carta1 = populacao1; valor2carta2 = populacao2; nomeatributo2 = "População"; break;
        case 2: valor2carta1 = area1; valor2carta2 = area2; nomeatributo2 = "Área"; break;
        case 3: valor2carta1 = pib1; valor2carta2 = pib2; nomeatributo2 = "PIB"; break;
        case 4: valor2carta1 = nturisticos1; valor2carta2 = nturisticos2; nomeatributo2 = "Pontos turísticos"; break;
        case 5: valor2carta1 = pibpercapita1; valor2carta2 = pibpercapita2; nomeatributo2 = "PIB per capita"; break;
        case 6: valor2carta1 = densidadepopulacional1; valor2carta2 = densidadepopulacional2; nomeatributo2 = "Densidade populacional"; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Comparação
    int pontoscarta1 = 0, pontoscarta2 = 0;

    printf("\nComparação:\n");

    // Primeira
    printf("%s: %.2f (Carta 1) x %.2f (Carta 2)\n", nomeatributo1, valor1carta1, valor1carta2);
    if (atributo1 == 6) {
        if (valor1carta1 < valor1carta2) pontoscarta1++;
        else if (valor1carta2 < valor1carta1) pontoscarta2++;
    } else {
        if (valor1carta1 > valor1carta2) pontoscarta1++;
        else if (valor1carta2 > valor1carta1) pontoscarta2++;
    }

    // Segunda
    printf("%s: %.2f (Carta 1) x %.2f (Carta 2)\n", nomeatributo2, valor2carta1, valor2carta2);
    if (atributo2 == 6) {
        if (valor2carta1 < valor2carta2) pontoscarta1++;
        else if (valor2carta2 < valor2carta1) pontoscarta2++;
    } else {
        if (valor2carta1 > valor2carta2) pontoscarta1++;
        else if (valor2carta2 > valor2carta1) pontoscarta2++;
    }

    // Soma
    float somacarta1 = valor1carta1 + valor2carta1;
    float somacarta2 = valor1carta2 + valor2carta2;

    printf("\nSoma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", somacarta1, somacarta2);

    // Resultado
    printf("\nResultado Final: ");
    if (somacarta1 > somacarta2)
        printf("Carta 1 venceu\n");
    else if (somacarta2 > somacarta1)
        printf("Carta 2 venceu\n");
    else
        printf("Empate\n");

    return 0;
}
