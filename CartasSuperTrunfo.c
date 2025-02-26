#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    // Definnindo e inicializando variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: Estado, código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado = 'L';
    char codigo [4] = "L03", nome[20] = "COREIA";
    int poPulacao = 51000000, _numerodepontosturisticos = 13;
    float A_rea = 100.210, PiB_ = 1.713;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("Jogo de cartas Super trunfo! \n");

    printf("Estado: ", Estado);
    scanf("%c", &Estado);

    printf("Código: ", codigo);
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ", nome);
    scanf("%s", &nome);

    printf("Qual é o número da populaçao? ");
    scanf("%d", &poPulacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &_numerodepontosturisticos);

    printf("Qual a área em metro quadrado: ");
    scanf("%f", &A_rea);

    printf("Digite o PIB do país: ");
    scanf("%f", &PiB_);


/*
  Especificadores de formato:

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.

*/


    return 0;
}
