#include <stdio.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main(){

    /*Carta 01*/

    char estado;
    char codigo[10];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int npontosturisticos;
    float densidadepop;
    float pibper;


    printf("Desafio cadastro de Cartas Super Trunfo \n");

    printf("Insira os dados de sua 1ª carta\n");

    printf("Digite o estado\n");
    scanf(" %c", &estado);
    limparBuffer();

    printf("Digite o código da carta\n");
    scanf("%s", &codigo);
    limparBuffer();

    printf("Digite o nome da cidade\n");
    scanf("%s", nomedacidade);
    limparBuffer();
    

    printf("Digite a população\n");
    scanf("%d", &populacao);
    limparBuffer();

    printf("Digite a área em km²\n");
    scanf("%f", &area);
    limparBuffer();

    printf("Digite o PIB em bilhões\n");
    scanf("%f", &pib);
    getchar();

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &npontosturisticos);
    limparBuffer();

    /*inicnio dos cauclos carta 01*/

    densidadepop = populacao / area;
    pibper = (pib * 1000000000) / populacao;

/*fim dos caulos*/

    /*Carta 02*/

    char estado2;
    char codigo2[10];
    char nomedacidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int npontosturisticos2;
    float densidadepop2;
    float pibper2;
   
    printf("Insira os dados de sua 2ª carta\n");

    printf("Digite o estado\n");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Digite o código da carta\n");
    scanf("%s", &codigo2);
    limparBuffer();

    printf("Digite o nome da cidade\n");
    scanf("%s", nomedacidade2);
    limparBuffer();

    printf("Digite a população\n");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Digite a área em km²\n");
    scanf("%f", &area2);
    limparBuffer();

    printf("Digite o PIB em bilhões\n");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &npontosturisticos2);
    limparBuffer();

    
         /*inicnio dos cauclos carta 02*/

        densidadepop2 = populacao2 / area2;
        pibper2 = (pib2 * 1000000000) / populacao2;
    
        /*fim dos caulos*/


    printf("Carta 01\n");

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", npontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop);
    printf("PIB per capita: %.2f bilhoes/hab\n", pibper);

    printf("Carta 02\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", npontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per capita: %.2f bilhoes/hab\n", pibper2);

return 0;

}