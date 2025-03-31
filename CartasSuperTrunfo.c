#include <stdio.h>

int main(){
    
    char estado,estado2;
    char codigo_carta[4],codigo_carta2[4];
    char nomeCidade[50];
    char nomeCidade2[50];
    int populacao,populacao2;
    float area_cidade,area_cidade2;
    float pib_cidade,pib_cidade2;
    int ponto_turisticos,ponto_turisticos2;
    float Densidade_populacional,Densidade_populacional2;
    float PIB_per_capita,PIB_per_capita2;

    

    //OBTENDO CARTA 01 ;
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
    
 
    //CALCULO DA DENSIDADE POPULACIONAL E PIB CAPITA DA CARTA 01;
    Densidade_populacional =(int) (populacao / area_cidade);
    PIB_per_capita =(float) (pib_cidade / populacao);
    //CALCULO DA DENSIDADE POPULACIONAL E PIB CAPITA DA CARTA 02;
    Densidade_populacional2 =(int) (populacao / area_cidade);
    PIB_per_capita2 =(float) (pib_cidade / populacao);

    //carta 01;
    //printf("############# DADOS PREENCIDOS CARTA 01 ###################\n\n");

    printf("\nEstado: %c",estado);
    printf("\nCodigo: %s",codigo_carta);
    printf("\nCidade: %s",nomeCidade);
    printf("\nPopulação: %d",populacao);
    printf("\nArea: %f",area_cidade);
    printf("\nPib: %f",pib_cidade);
    printf("\nturismo:%d",ponto_turisticos);
    printf("\nPIB Per Capita:%f",PIB_per_capita);
    printf("\nDensidade Populacional:%.2f",Densidade_populacional);


    
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
    
    return 0;
}
