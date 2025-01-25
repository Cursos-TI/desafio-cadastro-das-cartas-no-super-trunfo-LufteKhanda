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
    char codigo_da_cidade[2]; //Usei o _ para ficar mais facil de visualizar e entender a variavel
    char nome [20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Digite o codigo da cidade \n");
    scanf("%s", &codigo_da_cidade);

    printf("Digite o nome da sua cidade \n");
    scanf("%s", &nome);

    printf("Digite a população da sua cidade \n");
    scanf("%d", &populacao);

    printf("Digite a area da sua cidade \n");
    scanf("%f", &area);

    printf("Digite o pib da sua cidade \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turistico tem na sua cidade \n");
    scanf("%d", &pontos_turisticos);

    printf("Codigo da cidade: %s \n", codigo_da_cidade);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("Pib: %f \n", pib);
    printf("Pontos turisticos: %d \n", pontos_turisticos);

        return 0;
}
