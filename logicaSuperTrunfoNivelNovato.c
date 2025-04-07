#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int pontoturistico2, pontoturistico1;
    unsigned int populacao2, populacao1;
    float area2, area1, pib2, pib1, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
    char nome2[50], nome1[50], nomeestado1[50], nomeestado2[50], codigo1[50], codigo2[50];
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("\nInsira o nome do estado:\n");
    fgets(nomeestado1, sizeof(nomeestado1), stdin);

    printf("Insira o codigo da carta:\n");
    fgets(codigo1, sizeof(codigo1), stdin);

    printf("Insira o nome da cidade:\n");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Insira a População:\n");
    scanf("%i", &populacao1);

    printf("Insira o Numero de Pontos Turisticos:\n");
    scanf("%i", &pontoturistico1);

    printf("Insira a área em km:\n");
    scanf("%f", &area1);

    printf("Insira o PIB:\n");
    scanf("%f", &pib1);

    getchar();
    printf("Vamos regristrar agora a segunda carta\n");
    
    printf("\nInsira o nome do estado:\n");
    fgets(nomeestado2, sizeof(nomeestado2), stdin);

    printf("Insira o codigo da carta:\n");
    fgets(codigo2, sizeof(codigo2), stdin);

    printf("Insira o nome da cidade:\n");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Insira a população:\n");
    scanf("%i", &populacao2);

    printf("Insira o Numero de Pontos Turisticos:\n");
    scanf("%i", &pontoturistico2);

    printf("Insira a área em km:\n");
    scanf("%f", &area2);

    printf("Insira o PIB:\n");
    scanf("%f", &pib2);

    densidadepopulacional1 = (float)populacao1 / area1;
    densidadepopulacional2 = (float)populacao2 / area2;

    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Primeira carta registrada com sucesso\n");
    printf("Estado: %s\n", nomeestado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade:%s\n", nome1);
    printf("População: %i\n", populacao1);
    printf("Área: %2.f\n", area1);
    printf("PIB: %2.f\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capital:%.3f\n", pibpercapita1);

    superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + (1/densidadepopulacional1);
    printf("Superpoder: %.2f\n", superpoder1);

//repetindo o mesmo processo porém agora com para a segunda carta

//print da segunda carta assim como a da primeira. 
    printf("\nSegunda carta registrada com sucesso\n");
    printf("Estado: %s\n", nomeestado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade:%s\n", nome2);
    printf("População: %i\n", populacao2);
    printf("Área: %2.f\n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capital:%.3f\n", pibpercapita2);

    superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1/densidadepopulacional2);
    printf("Superpoder: %.2f\n", superpoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (superpoder1 > superpoder2) {
        printf("\nA carta 1 %s venceu!", nome1);
    } else if (superpoder2 > superpoder1) {
        printf("\nA carta 2 %s venceu!", nome2);
    } else {
        printf("\nAs cartas empataram!");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}