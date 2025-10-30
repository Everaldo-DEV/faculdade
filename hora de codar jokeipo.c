#include<stdio.h>
#include<stdlib.h>
#include<time.h>
  int main(){
    int escolhadojogador, escolhadocomputador;
    srand(time(0));
     printf("==== jogo do pedra papel tesoura ==== \n");
     printf("escolha uma opcao: \n");  
        printf("1 - pedra \n"); 
        printf("2 - papel \n");
        printf("3 - tesoura \n");
        printf("sua escolha: ");
        scanf("%d", &escolhadojogador);
        escolhadocomputador = rand() % 3 + 1;
       
        switch (escolhadojogador)
        {
        case 1:
            printf("voce  pedra - ");
            break;
        case 2:
            printf("voce papel - ");
            break;
        case 3:
            printf("voce  tesoura - ");
            break;
        default:
            printf("opcao invalida \n");
            break;
        }

        switch (escolhadocomputador)
        {
        case 1:
            printf("computador  pedra \n");
            break;
        case 2:
            printf("computador papel \n");
            break;
        case 3:
            printf("computador tesoura \n");
            break;
        }


        if (escolhadocomputador==escolhadojogador)

         {printf("O jogo empatou \n");}

        else if ((escolhadojogador==1) && (escolhadocomputador==3) || 
        (escolhadojogador==2) && (escolhadocomputador==1) ||
        (escolhadojogador==3) && (escolhadocomputador==2))
        { printf("Voce venceu!! \n");}
        else 
        {printf("O computador venceu!! \n");}
        
    return 0;
  }