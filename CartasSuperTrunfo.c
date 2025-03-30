#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    #include <stdio.h>

int main(){
    // %9S 
    char estado,estado2;
    char codigo_carta[4],codigo_carta2[4];
    char nomeCidade[50];
    char nomeCidade2[50];
    int populacao,populacao2;
    float area_cidade,area_cidade2;
    float pib_cidade,pib_cidade2;
    int ponto_turisticos,ponto_turisticos2;

    //OBTENDO CARTA 01 
    printf("\nQual Estado: ");
    scanf(" %c",&estado);
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

    //OBTENDO CARTA 02

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

    //carta 01
    printf("############# DADOS PREENCIDOS ###################\n\n");

    printf("Estado: \n",&estado);
    printf("Codigo: \n",&codigo_carta);
    printf("Cidade: \n",&nomeCidade);
    printf("População: \n",&populacao);
    printf("Area: \n",&area_cidade);
    printf("Pib: \n",&pib_cidade);
    printf("turismo:\n",&ponto_turisticos);

    //carta 02
    printf("Estado: \n",&estado2);
    printf("Codigo: \n",&codigo_carta2);
    printf("Cidade: \n",&nomeCidade2);
    printf("População: \n",&populacao2);
    printf("Area: \n",&area_cidade2);
    printf("Pib: \n",&pib_cidade2);
    printf("turismo: \n",&ponto_turisticos2);

    return 0;
}


    return 0;
}
