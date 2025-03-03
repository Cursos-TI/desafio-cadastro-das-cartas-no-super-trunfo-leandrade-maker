#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    // Nivel novato.
    // Definnindo e inicializando variáveis separadas para cada atributo da cidade.
    // Atributos: Estado, código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char eStado;
    char coDigo [4];
    char noMe [20];
    unsigned long int poPulacao; 
    int _numerodepontosturisticos;
    float A_rea;
    float Pib_;

    // declaração novas variaveis desnidade populacional e pib per capita.

    float d_pOpu;
    float Pib_cApi;

    // inicialização das novas variaveis para o nível aventureiro.

    d_pOpu = poPulacao / A_rea;
    Pib_cApi = Pib_ / poPulacao;

    // Declaração da variavel super poder para o nível mestre.
    // Calcular o super poder somando todas as características (exeto estado, código e nome).
    // O inverso da densidade populacional (subtrair).

    float suPerPower = poPulacao + _numerodepontosturisticos + A_rea + Pib_ + Pib_cApi - d_pOpu;
    
    // Cadastro das Cartas:
    // Função scanf para capturar as entradas do usuário para cada atributo.
    // Solicitando ao usuário que insira as informações de cada cidade.

    // Exibição dos Dados das Cartas: printf.

    /* Desafio evoluiou para o nível aventureiro. 
       Duas novas características de cada estado: desnidade populacional e PIB per capita
       Operadores matemáticos inseridos para o cálculo: divisão (/)
    */

    printf ("Jogo de cartas Super trunfo! \n");

    printf("\n");

    printf("CARTA DE NÚMERO 01");
    printf("\n");

    printf("Estado: ");
    scanf(" %c", &eStado);

    printf("Código: ");
    scanf(" %s", &coDigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &noMe);

    printf("Qual é o número da populaçao? ");
    scanf(" %lf", &poPulacao);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &_numerodepontosturisticos);

    printf("Qual a área em metro quadrado: ");
    scanf(" %lf", &A_rea);

    printf("Digite o PIB do país: ");
    scanf(" %lf", &Pib_);

    // novas informacoes (float implicita)

    printf("Densidade populacional: %.2lf \n", d_pOpu);
    printf("PIB per capita: %.2lf \n", Pib_cApi);

    // super poder

    printf("Superpoder: %f", suPerPower);


    //Segunda carta do jogo
    //Teste com as variáveis dentro do printf

    char estado, codigo [4], cidade [20];
    unsigned long int populacao;
    int pontosturisticos;
    float area, pib;
    float densidade = populacao / area;
    float percapita = pib / populacao;
    float superpoder = populacao + pontosturisticos + area + pib + percapita - densidade;

    printf("\n");
    
    printf("CARTA DE NÚMERO 02 \n");

    printf("\n");

    printf("Estado ", estado);
    scanf(" %c", &estado);

    printf("Código: ", codigo);
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ", cidade);
    scanf(" %s", &cidade);

    printf("Qual é o número da população? ", populacao);
    scanf(" %lf", &populacao);

    printf("Digite o número de pontos turísticos: ", pontosturisticos);
    scanf("%d", &pontosturisticos);

    printf("Qual a área em metros quadrados? ", area);
    scanf(" %lf", &area);

    printf("Digite o PIB do País: ", pib);
    scanf(" %lf", &pib);

    // novas informacoes
    printf("Desnidade populacional:  %.2lf\n", densidade);
    printf("PIB per capita: %.2lf\n", percapita);

    // super poder

    printf("Superpoder: %f\n", superpoder);


    // Desafio evoluiu para o nível mestre.
    // nova característica: super poder.
    // nesse nível mudança da variável poPulacao de "float" para "unsigned long int".
    
    




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
