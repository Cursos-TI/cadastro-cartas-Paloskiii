///fiz no visual studio, so depois que eu vi na parte final da pagina o github :)
#include <stdio.h>

int main(){
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[25], cidade2[25] ;
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    int pontostu1, pontostu2;


    printf("Olá, vamos começar :D\nInsira os dados da primeira carta: \n");
    
    printf("Qual é o estado? Insira apenas uma letra de 'A' ao 'H' para representar o estado.\n");
    scanf(" %c", &estado1);

    printf("Qual a cidade?\n");
    scanf("%s", &cidade1);

    printf("Qual é a população dessa cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual é a área total dessa cidade? (em km²)\n");
    scanf("%f", &area1);

    printf("Qual é o PIB desta cidade? (em bilhões)\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos possui essa cidade?\n");
    scanf("%d", &pontostu1);

    printf("Qual é o código da carta? o codigo da carta deve conter a letra do estado seguida de um número de 01 a 04(ex: A01, B03)\n");
    scanf("%s", &codigo1);
    printf("\n");

    printf("A sua primeira carta possuí os seguintes atributos: \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostu1);
    printf("\n");
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("Agora insira os dados da segunda carta: \n");
    printf("\n");

    printf("Qual é o estado? Insira apenas uma letra de 'A' ao 'H' para representar o estado.\n");
    scanf(" %c", &estado2);//o espaço antes do %c serve para o scanf ignorar os espaços e enters pendentes.

    printf("Qual a cidade?\n");
    scanf("%s", &cidade2);

    printf("Qual é a população dessa cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual é a área total dessa cidade? (em km²)\n");
    scanf("%f", &area2);

    printf("Qual é o PIB desta cidade? (em bilhões)\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos possui essa cidade?\n");
    scanf("%d", &pontostu2);

    printf("Qual é o código da carta? o codigo da carta deve conter a letra do estado seguida de um número de 01 a 04(ex: A01, B03)\n");
    scanf("%s", &codigo2);
    printf("\n");

    printf("A sua segunda carta possuí os seguintes atributos: \n");
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostu2);
    printf("\n");

    printf("Ótimo! Você terminou de inserir os dados das cartas, aqui estão os dados das cartas 1 e 2:\n");
    printf("\n");
///
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostu1);
    printf("\n");
///
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostu2);

    return 0;

}