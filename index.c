#include <stdio.h>
#include <string.h> 
 
int main(void) {
    char opcao;
    char codigo[5];
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Carta 1:\n");

    printf("Digite uma opcao de (A a H): ");
    scanf(" %c", &opcao);

    printf("Digite o codigo do País (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o País (ex: Brasil): ");
    scanf("%s", pais);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao);

   printf("Digite a area do País(em km²): ");
   scanf("%f", &area);

   printf("Digite o PIB (em bilhões de reais): ");
   scanf("%f", &pib);   

   printf("Digite o numero de pontos turisticos: ");
   scanf("%d", &pontosTuristicos);

   printf("\n*** Carta 1 ***\n");
   printf("Opcao: %c\n", opcao);
   printf("Codigo: %s\n", codigo);
   printf("País: %s\n", pais);
   printf("Populacao: %d\n", populacao);
   printf("Area: %.2f km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
   printf("\n====================\n");


   printf("Carte 2:\n");

   printf("Digite uma opcao de (A a H): ");
   scanf(" %c", &opcao);  

   printf("Digite o codigo do País (ex: A01): ");
   scanf("%s", codigo);

   printf("Digite o País (ex: Brasil): ");
   scanf("%s", pais);

   printf("Digite o numero da populacao: ");
   scanf("%d", &populacao);

   printf("Digite a area do País(em km²): ");
   scanf("%f", &area);

   printf("Digite o PIB (em bilhões de reais): ");
   scanf("%f", &pib);

   printf("Digite o numero de pontos turisticos: ");
   scanf("%d", &pontosTuristicos);

   printf("\n*** Carta 2 ***\n");
   printf("Opcao: %c\n", opcao);
   printf("Codigo: %s\n", codigo);
   printf("País: %s\n", pais);
   printf("Populacao: %d\n", populacao);
   printf("Area: %.2f km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
   printf("====================\n");
   return 0;
}