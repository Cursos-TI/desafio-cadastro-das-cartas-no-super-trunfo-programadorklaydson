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

//cadastramento das variaveis:

char Estado, codigodacarta[15], nome[15];
int populacao, pontosturisticos;
float area, PIB; 

// cadastramento da carta 1:

printf("Carta 1:\n");    

printf("Digite a letra do Estado.\n");
scanf("%s", &Estado);

printf("Digite o codigo da carta.\n");
scanf("%s", &codigodacarta);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", &nome);

printf("Digite a sua população.\n");
scanf("%d", &populacao);

printf("Digite o tamanho da area.\n");
scanf("%f", &area);

printf("Digite o PIB da cidade.\n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &pontosturisticos);

printf("\n");

// cadastramento da carta 2:

char estado, Codigodacarta[15], Nome[15];
int Populacao, Pontosturisticos;
float Area, pib; 

printf("Carta 2:\n");    

printf("Digite o Estado\n");
scanf("%s", &estado);

printf("Digite o codigo da carta.\n");
scanf("%s", &Codigodacarta);

printf("Digite o primeiro nome da cidade.\n");
scanf("%s", &Nome);

printf("Digite a sua população.\n");
scanf("%d", &Populacao);

printf("Digite o tamanho da area.\n");
scanf("%f", &Area);

printf("Digite o PIB da cidade.\n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &Pontosturisticos);

printf("\n");

//resultado do cadastro da carta 1:

printf("Carta 1:\n");
printf("Estado: %c\n", Estado);
printf("Codigo da carta: %s\n", codigodacarta);
printf("Nome da cidade: %s\n", nome);
printf("Popucação: %d\n", populacao);
printf("Area: %f\n", area);
printf("PIB: %f\n", PIB);
printf("Pontos turisticos: %d\n", pontosturisticos);

printf("\n");

//resultado do cadastro da carta 2:

printf("Carta 2:\n");
printf("Estado: %c\n", estado);
printf("Codigo da carta: %s\n", Codigodacarta);
printf("Nome da cidade: %s\n", Nome);
printf("Popucação: %d\n", Populacao);
printf("Area: %f\n", Area);
printf("PIB: %f\n", pib);
printf("Pontos turisticcos: %d\n", Pontosturisticos);

    return 0;
}
