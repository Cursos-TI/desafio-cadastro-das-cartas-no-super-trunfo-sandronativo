#include <stdio.h>

int main(){}

    /*Carta 01*/

    char estado;
    char codigo[10];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int npontosturisticos;


    printf("Desafio cadastro de Cartas Super Trunfo \n");

    printf("Insira os dados de sua 1ª carta\n");

    printf("Digite o estado\n");
    scanf(" %c", &estado);

    printf("Digite o código da carta\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomedacidade);

    printf("Digite a população\n");
    scanf("%d", &populacao);

    printf("Digite a área\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &npontosturisticos);

    /*Carta 02*/

    char estado2;
    char codigo2[10];
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int npontosturisticos2;


    printf("Insira os dados de sua 2ª carta\n");

    printf("Digite o estado\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomedacidade2);

    printf("Digite a população\n");
    scanf("%d", &populacao2);

    printf("Digite a área\n");
    scanf("%f", &area2);

    printf("Digite o PIB\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &npontosturisticos2);


    printf("Carta 01\n");

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %2f km²\n", area);
    printf("PIB: %2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", npontosturisticos);

    printf("Carta 02\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %2f km²\n", area2);
    printf("PIB: %2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", npontosturisticos2);


return 0;

}