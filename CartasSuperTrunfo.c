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

char Estado, codigodacarta[15], nome[15];
int pontosturisticos;
float area, PIB, densidade, pibPerCapita, superPoder;
unsigned long int populacao;

// cadastramento da carta 1:

printf("Carta 1:\n");    

printf("Digite a letra do Estado.\n");
scanf(" %c", &Estado);

printf("Digite o codigo da carta.\n");
scanf("%s", codigodacarta);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", nome);

printf("Digite a sua população.\n");
scanf("%lu", &populacao);

printf("Digite o tamanho da area.\n");
scanf("%f", &area);

printf("Digite o PIB da cidade.\n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &pontosturisticos);

printf("\n");

// cadastramento da carta 2:

char estado, Codigodacarta[15], Nome[15];
int Pontosturisticos;
float Area, pib, Densidade, PibPerCapita, SuperPoder;
unsigned long int Populacao;

printf("Carta 2:\n");    

printf("Digite o Estado.\n");
scanf(" %c", &estado);

printf("Digite o codigo da carta.\n");
scanf("%s", Codigodacarta);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", Nome);

printf("Digite a sua população.\n");
scanf("%lu", &populacao);

printf("Digite o tamanho da area.\n");
scanf("%f", &Area);

printf("Digite o PIB da cidade.\n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &Pontosturisticos);

printf("\n");

 // Calculos carta 1
 densidade = populacao / area;
 pibPerCapita = pib / populacao;
 superPoder = populacao + area + pib + (1.0f / densidade) + pibPerCapita + pontosturisticos;

 // Calculos carta 2
 Densidade = Populacao / Area;
 PibPerCapita = PIB / Populacao;
 SuperPoder = Populacao + Area + PIB + (1.0f / Densidade) + PibPerCapita + Pontosturisticos;

 // resultadp das cartas

 printf("\n");

 printf("Dados das Cartas:\n");

 printf("\n");

 printf("Carta 1:\n");
 printf("Estado: %c\n", estado);
 printf("Código: %s\n", codigodacarta);
 printf("Cidade: %s\n", nome);
 printf("População: %lu\n", populacao);
 printf("Área: %.2f\n", area);
 printf("PIB: %.2f\n", PIB);
 printf("Pontos turísticos: %d\n", pontosturisticos);
 printf("Densidade Populacional: %.2f\n", densidade);
 printf("PIB per Capita: %.2f\n", pibPerCapita);
 printf("Super Poder: %.2f\n", superPoder);

printf("\n");

 printf("Carta 2:\n");
 printf("Estado: %c\n", Estado);
 printf("Código: %s\n", codigodacarta);
 printf("Cidade: %s\n", Nome);
 printf("População: %lu\n", Populacao);
 printf("Área: %.2f\n", Area);
 printf("PIB: %.2f\n", pib);
 printf("Pontos turísticos: %d\n", Pontosturisticos);
 printf("Densidade Populacional: %.2f\n", Densidade);
 printf("PIB per Capita: %.2f\n", PibPerCapita);
 printf("Super Poder: %.2f\n", SuperPoder);

 // Comparações das cartas

 printf("\n");

 printf("Comparações: (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n");

printf("\n");

 printf("População: %d\n", (populacao > Populacao));
 printf("Área: %d\n", (area > Area));
 printf("PIB: %d\n", (PIB > pib));
 printf("Pontos turísticos: %d\n", (pontosturisticos> Pontosturisticos));
 printf("Densidade Populacional (menor vence): %d\n", (densidade < Densidade));
 printf("PIB per Capita: %d\n", (pibPerCapita > PibPerCapita));
 printf("Super Poder: %d\n", (superPoder > SuperPoder));

    return 0;
}
