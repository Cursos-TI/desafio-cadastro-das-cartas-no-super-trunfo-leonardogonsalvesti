#include <stdio.h>

int main(){
    
    //DECLARAÇÃO DE VARIAVEIS 
    char estado,estado2;
    char codigo_carta[4],codigo_carta2[4];
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

    //OBTENDO CARTA 01 
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

    
    //OBTENDO CARTA 02;

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
    
 
    //CALCULO DA DENSIDADE POPULACIONAL, SUPER PODER E PIB CAPITA DA CARTA 01;
    Densidade_populacional =(unsigned int) (populacao / area_cidade);
    PIB_per_capita =(float) (pib_cidade / populacao);    
    inverso_densidadeP_A = (float)(area_cidade / populacao);    
    super_PoderA = populacao + area_cidade + pib_cidade + ponto_turisticos + PIB_per_capita + inverso_densidadeP_A;

    //CALCULO DA DENSIDADE POPULACIONAL, SUPER PODER E PIB CAPITA DA CARTA 02;
    Densidade_populacional2 =(unsigned int) (populacao2 / area_cidade2);    
    PIB_per_capita2 =(float) (pib_cidade2 / populacao2);
    inverso_densidadeP_B = (float)(area_cidade2 / populacao2);    
    super_PoderB = populacao2 + area_cidade2 + pib_cidade2 + ponto_turisticos2 + PIB_per_capita2 + inverso_densidadeP_B;

    printf("\n############# DADOS PREENCIDOS CARTA 01 ###################\n\n");


    //carta 01;
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


    
    printf("\n############# DADOS PREENCIDOS CARTA 02 ###################\n\n");



    //carta 02;
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
    

    //validacao e comparacao de dados para escolher a carta que ira vencer.

    
    printf(" Resultado da comparação:\n");


    float ResultadoPopulacao = populacao > populacao2;
    printf(" População: Carta 1 venceu? %f\n", ResultadoPopulacao);
    float ResultadoArea = area_cidade > area_cidade2;
    printf(" Área: Carta 1 venceu? %f\n", ResultadoArea);
    float ResultadoPib = pib_cidade > pib_cidade2;
    printf(" PIB: Carta 1 venceu? %f\n", ResultadoPib);
    float ResultadoTuristico = ponto_turisticos > ponto_turisticos2;
    printf(" Pontos Turísticos:  Carta 1 venceu? %f\n", ResultadoTuristico);
    float ResultadoDesindade = Densidade_populacional < Densidade_populacional2;
    printf(" Densidade Populacional:  Carta 1 venceu? %f\n", ResultadoDesindade);
    float ResultadoPercapita = PIB_per_capita > PIB_per_capita2;
    printf(" PIB per Capita:  Carta 1 venceu? %f\n", ResultadoPercapita);
    float ResultadoPoder = super_PoderA > super_PoderB;
    printf(" Super Poder: Carta 1 venceu? %f\n", ResultadoPoder);

    
    return 0;
}
