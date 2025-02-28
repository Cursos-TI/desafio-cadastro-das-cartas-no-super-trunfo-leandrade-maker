#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    // Definnindo e inicializando variáveis separadas para cada atributo da cidade.
    // Atributos: Estado, código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado;
    char codigo [4], nome[20];
    float poPulacao; 
    int _numerodepontosturisticos;
    float A_rea, PiB_;

    // declaração novas variaveis desnidade populacional e pib per capita.

    float d_pOpu, Pib_cApi;

    // inicialização das novas variaveis.

    d_pOpu = poPulacao / A_rea;
    Pib_cApi = PiB_ / poPulacao;
    
    // Cadastro das Cartas:
    // Função scanf para capturar as entradas do usuário para cada atributo.
    // Solicitando ao usuário que insira as informações de cada cidade.

    // Exibição dos Dados das Cartas: printf.

    /* Desafio evoluiou para o nível aventureiro. 
       Duas novas características de cada estado: desnidade populacional e PIB per capita
       Operadores matemáticos inseridos para o cálculo: divisão (/)
    */

    printf ("Jogo de cartas Super trunfo! \n");
    printf("CARTA DE NÚMERO 01 \n");

    printf("Estado: ");
    scanf(" %c", &Estado);

    printf("Código: ");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nome);

    printf("Qual é o número da populaçao? ");
    scanf(" %lf", &poPulacao);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &_numerodepontosturisticos);

    printf("Qual a área em metro quadrado: ");
    scanf(" %lf", &A_rea);

    printf("Digite o PIB do país: ");
    scanf(" %lf", &PiB_);

    // novas informacoes (float implicita)

    printf("Densidade populacional: %.2lf \n", d_pOpu);
    printf("PIB per capita: %.2lf \n", Pib_cApi);


    //Segunda carta do jogo
    //Teste com as variáveis dentro do printf
    
    printf("CARTA DE NÚMERO 02 \n");

    printf("Estado ", Estado);
    scanf(" %c", &Estado);

    printf("Código: ", codigo);
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ", nome);
    scanf(" %s", &nome);

    printf("Qual é o número da população? ", poPulacao);
    scanf(" %lf", &poPulacao);

    printf("Digite o número de pontos turísticos: ", _numerodepontosturisticos);
    scanf("%d", &_numerodepontosturisticos);

    printf("Qual a área em metros quadrados? ", A_rea);
    scanf(" %lf", &A_rea);

    printf("Digite o PIB do País: ", PiB_);
    scanf(" %lf", &PiB_);

    // novas informacoes
    printf("Desnidade populacional:  %.2lf\n", d_pOpu);
    printf("PIB per capita: %.2lf\n", Pib_cApi);

    /*
    OBSERVAÇÃO
    Notei que ao tentar incerir números de tipo float com mais de dois pontos(ex: 400.200.300),
    oprograma não rodou pois o scanf não interpreta isso como um número valido uma vez que o formato
    esperado para float ou double é de um número que contenha apenas um número (ex: 400.300).
    
    Quando o scanf encontra um formato inesperado, ele não consegue processar a entrada e, por isso, 
    não lê o restante das informações. O programa pode ficar "preso" esperando uma entrada válida, 
    pois o buffer de entrada ainda contém o que foi digitado.
    */





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
