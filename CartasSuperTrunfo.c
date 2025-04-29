#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

// cadastramento das variaveis:

//carta 1:

char Estado1, codigodacarta1[15], nome1[15];
int pontosturisticos1;
float area1, PIB1, densidade1, pibPerCapita1, superPoder1;
unsigned long int populacao1;

//carta 2:

char Estado2, codigodacarta2[15], nome2[15];
int pontosturisticos2;
float area2, PIB2, densidade2, pibPerCapita2, superPoder2;
unsigned long int populacao2;

// cadastramento da carta 1:

printf("Carta 1:\n");    

printf("Digite a letra do Estado.\n");
scanf(" %c", &Estado1);

printf("Digite o codigo da carta.\n");
scanf("%s", codigodacarta1);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", nome1);

printf("Digite a sua população.\n");
scanf("%lu", &populacao1);

printf("Digite o tamanho da area.\n");
scanf("%f", &area1);

printf("Digite o PIB da cidade.\n");
scanf("%f", &PIB1);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &pontosturisticos1);

printf("\n");

// cadastramento da carta 2:

printf("Carta 2:\n");    

printf("Digite o Estado.\n");
scanf(" %c", &Estado2);

printf("Digite o codigo da carta.\n");
scanf("%s", codigodacarta2);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", nome2);

printf("Digite a sua população.\n");
scanf("%lu", &populacao2);

printf("Digite o tamanho da area.\n");
scanf("%f", &area2);

printf("Digite o PIB da cidade.\n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &pontosturisticos2);

printf("\n");

 // Calculos carta 1
 densidade1 = populacao1 / area1;
 pibPerCapita1 = PIB1 / populacao1;
 superPoder1 = populacao1 + area1 + PIB1 + (1.0f / densidade1) + pibPerCapita1 + pontosturisticos1;

 // Calculos carta 2
 densidade2 = populacao2 / area2;
 pibPerCapita2 = PIB2 / populacao2;
 superPoder2 = populacao2 + area2 + PIB2 + (1.0f / densidade2) + pibPerCapita2 + pontosturisticos2;

 // resultadp das cartas

 printf("\n");

 printf("***Dados das Cartas:***\n");

 printf("\n");

 printf("Carta 1:\n");
 printf("Estado: %c\n", Estado1);
 printf("Código: %s\n", codigodacarta1);
 printf("Cidade: %s\n", nome1);
 printf("População: %lu\n", populacao1);
 printf("Área: %.2f\n", area1);
 printf("PIB: %.2f\n", PIB1);
 printf("Pontos turísticos: %d\n", pontosturisticos1);
 printf("Densidade Populacional: %.2f\n", densidade1);
 printf("PIB per Capita: %.2f\n", pibPerCapita1);
 printf("Super Poder: %.2f\n", superPoder1);

printf("\n");

 printf("Carta 2:\n");
 printf("Estado: %c\n", Estado2);
 printf("Código: %s\n", codigodacarta2);
 printf("Cidade: %s\n", nome2);
 printf("População: %lu\n", populacao2);
 printf("Área: %.2f\n", area2);
 printf("PIB: %.2f\n", PIB2);
 printf("Pontos turísticos: %d\n", pontosturisticos2);
 printf("Densidade Populacional: %.2f\n", densidade2);
 printf("PIB per Capita: %.2f\n", pibPerCapita2);
 printf("Super Poder: %.2f\n", superPoder2);

 // Comparações das cartas

 printf("\n");

 printf("***Comparações: \n");
 printf("(1 = Carta 1 venceu, 0 = Carta 2 venceu)\n");

printf("\n");

 printf("População: %d\n", (populacao1 > populacao2));
 printf("Área: %d\n", (area1 > area2));
 printf("PIB: %d\n", (PIB1 > PIB2));
 printf("Pontos turísticos: %d\n", (pontosturisticos1 > pontosturisticos2));
 printf("Densidade Populacional (menor vence): %d\n", (densidade1 < densidade2));
 printf("PIB per Capita: %d\n", (pibPerCapita1 > pibPerCapita2));
 printf("Super Poder: %d\n", (superPoder1 > superPoder2));

    return 0;
}
