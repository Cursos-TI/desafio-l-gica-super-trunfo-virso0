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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
