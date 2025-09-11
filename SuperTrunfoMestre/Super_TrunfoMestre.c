#include <stdio.h>

int main(){

    // Declaração das variáveis para a primeira carta//
    int pontosTuristicos;
    float area,populacao,PIB,DensidadePopulacional;
    float pibPerCapita;
    float superPoder;
    char nome[30],estado[10] ;
    char codigo[4];
    
    // Declaração das variáveis para a segunda carta//
    int pontosTuristicos2;
    float area2,populacao2,PIB2,DesnsidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
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

    printf("Digite a populacao da cidade, em milhoes de habitantes: ");
    scanf("%f",&populacao);

    printf("Digite a area da cidade em km²: ");
    scanf("%f",&area);
    
    printf("Digite o PIB da cidade, em bilhoes de Reais: ");
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

    printf("Digite a populacao da cidade, em milhoes de habitantes: ");
    scanf("%f",&populacao2);

    printf("Digite a area da cidade em km²: ");
    scanf("%f",&area2);
    
    printf("Digite o PIB da cidade, em bilhoes: ");
    scanf("%f",&PIB2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d",&pontosTuristicos2);

  // preparando as variaveis para o calculo final//
    populacao=populacao*1000000;
    populacao2=populacao2*1000000;
    PIB=PIB*1000000000;
    PIB2=PIB2*1000000000;
   
    //calculo do super poder//
        superPoder= (1/DensidadePopulacional);
        superPoder2= (1/DesnsidadePopulacional2);

    //Calculo da densidade populacional//
      DensidadePopulacional= populacao/area;
      DesnsidadePopulacional2= populacao2/area2; 


    //calculo do pib per capita//
      pibPerCapita= PIB/populacao;
      pibPerCapita2= PIB2/populacao2;

     // preparando as variaveis para a apresentacao//
      populacao=populacao/1000000;
      populacao2=populacao2/1000000;
      PIB=PIB/1000000000;
      PIB2=PIB2/1000000000;
      
    /* Saida dos dados das cartas.
    iserindo logica de comparacao junto com a saida das cartas.
    (%d) ira apresentar 1 para "vencedor" e 0 para "perdedor".
   */
    
 
   //saida da carta 1//

    printf("\n------%s------\n",codigo);

    printf("Cidade: %s \n", nome);

    printf("Estado: %s \n",  estado);

    printf("Codigo: %s \n", codigo);

    printf("Populacao: %.2f de Habitantes" , populacao);
    printf("(%d)\n", populacao>=populacao2);

    printf("Area: %.2f km² ", area);
    printf("(%d)\n", area>=area2);

    printf("PIB: %.2f Milhoes de reais ", PIB);
    printf("(%d)\n", PIB>=PIB2);

    printf("Pontos Turisticos: %d ", pontosTuristicos);
    printf("(%d)\n", pontosTuristicos>=pontosTuristicos2);

    printf("Densidade Demografica: %.2f hab/km² ", DensidadePopulacional);
    printf("(%d)\n", DensidadePopulacional>=DesnsidadePopulacional2);

    printf("PIB per capita: %.2f Reais por habitante ", pibPerCapita);
    printf("(%d)\n", pibPerCapita>=pibPerCapita2);

    printf("Super Poder: ");
    printf("(%d)\n", superPoder>=superPoder2);

    printf("----------------\n");
    
    //saida da carta 2//
   
    printf("\n------%s------\n",codigo2);

    printf("Cidade: %s\n", nome2);

    printf("Estado: %s\n",  estado2);

    printf("Codigo: %s\n", codigo2);

    printf("Populacao: %.2f de Habitantes ", populacao2);
    printf("(%d)\n", populacao2>=populacao);

    printf("Area: %.2fkm² " , area2);
    printf("(%d)\n", area2>=area);

    printf("PIB: %.2f Milhoes de reais ", PIB2);
    printf("(%d)\n", PIB2>=PIB);

    printf("Pontos Turisticos: %d ", pontosTuristicos2);
    printf("(%d)\n", pontosTuristicos2>=pontosTuristicos);

    printf("Densidade Demografica: %.2f hab/km² ", DesnsidadePopulacional2);
    printf("(%d)\n", DesnsidadePopulacional2>=DensidadePopulacional);
    
    printf("PIB per capita: %.2f Reais por habitante ", pibPerCapita2);
    printf("(%d)\n", pibPerCapita2>=pibPerCapita);

    printf("Super Poder: ");
    printf("(%d)\n", superPoder2>=superPoder);


    printf("----------------\n");


    return 0;
}