#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado1 , estado2;
    char codigo1[20], codigo2[20] , cidade1[20] , cidade2[20];
    int populacao1 , populacao2 , turistico1 , turistico2;
    float area1 , area2 , pib1 , pib2;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro da Carta 1:
    printf("Dados da Carta 1 \n");
    printf("Digite seu estado:");
    scanf("%c" , &estado1);
    printf("Digita o codigo: ");
    scanf("%s" , codigo1);
    printf("Digita o nome da sua cidade: ");
    scanf("%s" , cidade1);
    printf("Digita a populacao: ");
    scanf("%d" , &populacao1);
    printf("Digita a area da sua cidade: ");
    scanf("%f" , &area1);
    printf("Digita o PIB: ");
    scanf("%f" , &pib1);
    printf("Digita o numero de pontos turisticos: ");
    scanf("%d" , &turistico1);

    // Cadastro da Carta 2:
    printf("Dados da Carta 2 \n");
    printf("Digite seu estado: ");
    scanf(" %c" , &estado2);
    printf("Digita o codigo: ");
    scanf("%s" , codigo2);
    printf("Digita o nome da sua cidade: ");
    scanf("%s" , cidade2);
    printf("Digita a populacao: ");
    scanf("%d" , &populacao2);
    printf("Digita a area da sua cidade: ");
    scanf("%f" , &area2);
    printf("Digita o PIB: ");
    scanf("%f" , &pib2);
    printf("Digita o numero de pontos turisticos: ");
    scanf("%d" , &turistico2);

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    printf("Carta 1 \n");
    printf("Estado: %c \n" , estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f km \n", area1 );
    printf("PIB: %.2f \n", pib1);
    printf("Numero de Pontos turisticos: %d \n\n" , turistico1);

    printf("Carta 2 \n");
    printf("Estado: %c \n" , estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %2.f km \n", area2 );
    printf("PIB: %2.f \n", pib2);
    printf("Numero de Pontos turisticos: %d \n\n" , turistico2);


    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
