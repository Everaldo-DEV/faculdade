#include <stdio.h>

int main(){

    // Declaração das variáveis para a primeira carta//
    int pontosTuristicos;
    float area,populacao,PIB,DensidadePopulacional,pibPerCapita;
    char nome[30],estado[10] ;
    char codigo[4];
    
    // Declaração das variáveis para a segunda carta//
    int pontosTuristicos2;
    float area2,populacao2,PIB2,DesnsidadePopulacional2, pibPerCapita2;
    char nome2[30],estado2[10] ;
    char codigo2[4];
    
    // Entrada de dados da primeira carta//
    printf("Isira os dados  da Primeira carta:\n");

    printf("Digite o nome da cidade: ");
    scanf("%s",nome);

    printf("Digite o estado da cidade: ");
    scanf("%s",estado);

    printf("Digite o codigo da cidade: ");
    scanf("%s",codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%f",&populacao);

    printf("Digite a area da cidade em km²: ");
    scanf("%f",&area);
    
    printf("Digite o PIB da cidade, em milhoes: ");
    scanf("%f",&PIB);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d",&pontosTuristicos);

    printf("///////////////////////////////////\n");   // Separador entre as cartas//
   
    // Entrada de dados da segunda carta//
    printf("Isira os dados  da Segunda carta:\n");
    
    printf("Digite o nome da cidade: ");
    scanf("%s",nome2);

    printf("Digite o estado da cidade: ");
    scanf("%s",estado2);

    printf("Digite o codigo da cidade: ");
    scanf("%s",codigo2);

    printf("Digite a populacao da cidade: ");
    scanf("%f",&populacao2);

    printf("Digite a area da cidade em km²: ");
    scanf("%f",&area2);
    
    printf("Digite o PIB da cidade, em milhoes: ");
    scanf("%f",&PIB2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d",&pontosTuristicos2);

    //calculo do pib per capita//
    pibPerCapita= PIB/populacao;
    pibPerCapita2= PIB2/populacao2;

    //Calculo da densidade populacional//
    DensidadePopulacional= populacao/area;
    DesnsidadePopulacional2= populacao2/area2; 


    // Saida dos dados das cartas//

    printf("\n------%s------\nCidade : %s\nEstado: %s\nCodigo: %s\nPopulacao: %.2f Habitantes\nArea: %.2fkm²\nPIB: %.2f Milhoes de reais\nPontos Turisticos: %d\nDensidade Demografica: %.2f hab/km²\nPIB per capita: %.2f Reais por habitante\n----------------\n",codigo,nome,estado,codigo,populacao,area,PIB,pontosTuristicos,DensidadePopulacional,pibPerCapita);
    printf("\n------%s-------\nCidade : %s\nEstado: %s\nCodigo: %s\nPopulacao: %.2f Habitantes\nArea: %.2fkm²\nPIB: %.2f Milhoes de reais\nPontos Turisticos: %d\nDensidade Demografica: %.2f hab/km²\nPIB per capita: %.2f Reais por habitante\n-------------\n",codigo2,nome2,estado2,codigo2,populacao2,area2,PIB2,pontosTuristicos2,DesnsidadePopulacional2,pibPerCapita2);
    
    return 0;
}