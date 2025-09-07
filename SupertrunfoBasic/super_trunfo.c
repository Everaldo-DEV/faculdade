#include <stdio.h>

int main(){

    // Declaração das variáveis para a primeira carta//
    int populacao,pontosTuristicos;
    float area,PIB;
    char nome[30],estado[10] ;
    char codigo[4];

    // Declaração das variáveis para a segunda carta//
    int populacao2,pontosTuristicos2;
    float area2,PIB2;
    char nome2[30],estado2[10] ;
    char codigo2[4];

    // Entrada de dados da primeira carta//
    printf("Isira os dados  da Primeira carta:\n");

    printf("Digite o nome da cidade: ");
    fgets(nome, 30 , stdin);

    printf("Digite o estado da cidade: ");
    fgets(estado, 20 , stdin);

    printf("Digite o codigo da cidade: ");
    scanf("%s",codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%d",&populacao);

    printf("Digite a area da cidade: ");
    scanf("%f",&area);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f",&PIB);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d",&pontosTuristicos);

    printf("///////////////////////////////////\n");   // Separador entre as cartas//
   
    // Entrada de dados da segunda carta//
    printf("Isira os dados  da Segunda carta:\n");
    
    printf("Digite o nome da cidade: ");
    fgets(nome2, 30 , stdin);

    printf("Digite o estado da cidade: ");
    fgets(estado2, 20 , stdin);

    printf("Digite o codigo da cidade: ");
    scanf("%s",codigo2);

    printf("Digite a populacao da cidade: ");
    scanf("%d",&populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f",&area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f",&PIB2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d",&pontosTuristicos2);

    // Saida dos dados das cartas//

    printf("\n------%s------\nCidade : %sEstado: %sCodigo: %s\nPopulacao: %d\nArea: %.2fkm²\nPIB: %.2f\nPontos Turisticos: %d\n----------------",codigo,nome,estado,codigo,populacao,area,PIB,pontosTuristicos);
    printf("\n------%s-------\nCidade : %sEstado: %sCodigo: %s\nPopulacao: %d\nArea: %.2fkm²\nPIB: %.2f\nPontos Turisticos: %d\n-------------\n",codigo2,nome2,estado2,codigo2,populacao2,area2,PIB2,pontosTuristicos2);
    
    return 0;
}