#include <stdio.h>
int main(){
    //Variáveis para armazenar os dados da carta
    char estado1;
    char codigo1[6];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    //Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[6];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //--- LEITURA DA PRIMEIRA CARTA ---
    printf("CARTA 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //--- LEITURA DA SEGUNDA CARTA ---
    printf("\nCARTA 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome_da_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //EXIBINDO OS RESULTADOS DAS DUAS CARTAS
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.2f milhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;

} 