#include <stdio.h>

int main(){
    
    //DECLARAÇÃO DE VARIAVEIS 
    char estado,estado2;
    char codigo_carta[20],codigo_carta2[20];
    char nomeCidade[50];
    char nomeCidade2[50];
    unsigned long int populacao,populacao2;
    float area_cidade,area_cidade2;
    float pib_cidade,pib_cidade2;
    int ponto_turisticos,ponto_turisticos2;
    float Densidade_populacional,Densidade_populacional2;
    float PIB_per_capita,PIB_per_capita2;
    float super_PoderA,super_PoderB;
    float inverso_densidadeP_A,inverso_densidadeP_B;
    int escolhaJogador;

    //OBTENDO DADOS DA CARTA 01 
    printf("\nQual Estado: ");
    scanf(" %c",&estado2);  
    printf("\nCodigo da Carta: ");
    scanf(" %s",&codigo_carta);
    printf("\nNome da Cidade: ");
    scanf(" %49s",&nomeCidade);     
    printf("\nNumero de Habitantes:");
    scanf("%d",&populacao);
    printf("\nArea da Cidade:");
    scanf("%f",&area_cidade);
    printf("\nPIB da cidade:");
    scanf("%f",&pib_cidade);
    printf("\nPontos Turisticos:");
    scanf("%d",&ponto_turisticos);

    
    //OBTENDO DADOS DA  CARTA 02
    printf("\nQual Estado: ");
    scanf(" %c",&estado2);
    printf("\nCodigo da Carta: ");
    scanf(" %s",&codigo_carta2);
    printf("\nNome da Cidade: ");
    scanf(" %49s",&nomeCidade2);     
    printf("\nNumero de Habitantes:");
    scanf("%d",&populacao2);
    printf("\nArea da Cidade:");
    scanf("%f",&area_cidade2);
    printf("\nPIB da cidade:");
    scanf("%f",&pib_cidade2);
    printf("\nPontos Turisticos:");
    scanf("%d",&ponto_turisticos2);
    
 
    //CALCULO DA DENSIDADE POPULACIONAL, SUPER PODER E PIB CAPITA DA CARTA 01
    Densidade_populacional =(float) (populacao / area_cidade);
    PIB_per_capita =(float) (pib_cidade / populacao);    
    inverso_densidadeP_A = (float)(area_cidade / populacao);    
    super_PoderA = populacao + area_cidade + pib_cidade + ponto_turisticos + PIB_per_capita + inverso_densidadeP_A;

    //CALCULO DA DENSIDADE POPULACIONAL, SUPER PODER E PIB CAPITA DA CARTA 02
    Densidade_populacional2 =(float) (populacao2 / area_cidade2);    
    PIB_per_capita2 =(float) (pib_cidade2 / populacao2);
    inverso_densidadeP_B = (float)(area_cidade2 / populacao2);    
    super_PoderB = populacao2 + area_cidade2 + pib_cidade2 + ponto_turisticos2 + PIB_per_capita2 + inverso_densidadeP_B;

    printf("\n############# DADOS PREENCHIDOS CARTA 01 ###################\n");


    //CARTA 01;
    printf("\nEstado: %c",estado);
    printf("\nCodigo: %s",codigo_carta);
    printf("\nCidade: %s",nomeCidade);
    printf("\nPopulação: %d",populacao);
    printf("\nArea: %f",area_cidade);
    printf("\nPib: %f",pib_cidade);
    printf("\nturismo:%d",ponto_turisticos);
    printf("\nPIB Per Capita:%f",PIB_per_capita);
    printf("\nDensidade Populacional:%.2f",Densidade_populacional);
    printf("\nPoder: %f\n",super_PoderA);


    
    printf("\n############# DADOS PREENCIDOS CARTA 02 ###################\n");



    //CARTA 02;
    printf("\nEstado: %c",estado2);
    printf("\nCodigo: %s",codigo_carta2);
    printf("\nCidade: %s",nomeCidade2);
    printf("\nPopulação: %d",populacao2);
    printf("\nArea: %f",area_cidade2);
    printf("\nPib: %f",pib_cidade2);
    printf("\nturismo:%d",ponto_turisticos2);
    printf("\nPIB Per Capita:%f",PIB_per_capita2);
    printf("\nDensidade Populacional:%.2f",Densidade_populacional2);
    printf("\nPoder: %f\n",super_PoderB);
    
//CRIAÇÃO DO MENU DE ESCOLHA DA BATALHA DAS CARTAS.

    printf("\n############# selecione o poder a utilizar ###################\n");

    printf("Escolha uma opção para batalha!\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("SUA ESCOLHA: ");
    scanf("%d", &escolhaJogador);

//LOGICA DE BATALHA DAS CARTAS BASEADO NA ESCOLHA DO JOGADOR.

    switch (escolhaJogador){
        case 1:
            printf("você escolheu População\n");
            printf("Carta 1 - %s tem poder igual a: %ld\n",nomeCidade,populacao);
            printf("Carta 2 - %s tem poder igual a: %ld\n",nomeCidade2,populacao2);
            if(populacao > populacao2){
                printf("\nA Carta 1 - %s Venceu!\n",nomeCidade);
            }else if (populacao < populacao2){                    
                printf("\nA Carta 2 - %s Venceu!\n",nomeCidade2);
            }else{
                printf("\nEmpatou!\n");            
            }
            break; 
        case 2:
            printf("você escolheu Area\n");
            printf("Carta 1 - %s tem poder igual a: %ld\n",nomeCidade,area_cidade);
            printf("Carta 2 - %s tem poder igual a: %ld\n",nomeCidade2,area_cidade2);
            if(area_cidade > area_cidade2){
                printf("\nA Carta 1 - %s Venceu!\n",nomeCidade);
            }else if (area_cidade < area_cidade2){                    
                printf("\nA Carta 2 - %s Venceu!\n",nomeCidade2);
            }else{
                printf("\nEmpatou!\n");            
            }
            break; 
        case 3:
            printf("você escolheu Pib\n");
            printf("Carta 1 - %s tem poder igual a: %ld\n",nomeCidade,pib_cidade);
            printf("Carta 2 - %s tem poder igual a: %ld\n",nomeCidade2,pib_cidade2);
            if(pib_cidade > pib_cidade2){
                printf("\nA Carta 1 - %s Venceu!\n",nomeCidade);
            }else if (pib_cidade < pib_cidade2){                    
                printf("\nA Carta 2 - %s Venceu!\n",nomeCidade2);
            }else{
                printf("\nEmpatou!\n");            
            }
            break; 
        case 4:
            printf("Você escolheu Pontos Turisticos\n");
            printf("Carta 1 - %s tem poder igual a: %ld\n",nomeCidade,ponto_turisticos);
            printf("Carta 2 - %s tem poder igual a: %ld\n",nomeCidade2,ponto_turisticos2);
            if(ponto_turisticos > ponto_turisticos2){
                printf("\nA Carta 1 - %s Venceu!\n",nomeCidade);
            }else if (ponto_turisticos < ponto_turisticos2){                    
                printf("\nA Carta 2 - %s Venceu!\n",nomeCidade2);
            }else{
                printf("\nEmpatou!\n");            
            }
            break; 
        case 5:
            printf("você escolheu Densidade Populacional\n");
            printf("Carta 1 - %s tem poder igual a: %ld\n",nomeCidade,Densidade_populacional);
            printf("Carta 2 - %s tem poder igual a: %ld\n",nomeCidade2,Densidade_populacional2);
            if(Densidade_populacional < Densidade_populacional2){
                printf("\nA Carta 1 - %s Venceu!\n",nomeCidade);
            }else if (Densidade_populacional > Densidade_populacional2){                    
                printf("\nA Carta 2 - %s Venceu!\n",nomeCidade2);
            }else{
                printf("\nEmpatou!\n");            
            }
            break;        
        default:
            printf("Opção invalida!, Tente execultar novamente e escolher uma opção valida\n");
            break;
        }
 
    
    return 0;
}
