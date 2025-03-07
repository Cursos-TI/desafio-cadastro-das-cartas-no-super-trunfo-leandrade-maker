#include <stdio.h>

// Desafio Super Trunfo - Países: Base para o sistema de cadastro de cartas de cidades.

int main() {

    // Nível Novato: Inicialização de variáveis para atributos da cidade.

    char estado1;
    int codigo1;
    char cidade1 [15];
    unsigned long int populacao1; 
    int numero_de_pontos_turisticos1;
    float area1;
    float pib1;

    /*   
    Nível Novato: Inicialização de variáveis para atributos da cidade.
    
    Nível aventureiro: Declaração de densidade populacional e PIB per capita; 
    inicialização no nível aventureiro com cálculo por divisão.
       
    Nível Mestre: Adição do "super poder" e mudança de tipo para população; 
    cálculo do super poder (soma das características - densidade);
    exceto estado, código e cidade.
    Comparações de cartas.
    */

       
    // Cadastro: Uso de scanf para capturar dados do usuário.
    // Exibição dos dados com printf.
    

    printf ("Jogo de cartas Super trunfo! \n");

    printf("\n");

    printf("CARTA DE NÚMERO 01");
    printf("\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf(" %d", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade1);

    printf("Qual é o número da populaçao? ");
    scanf(" %lu", &populacao1); // corrigido para %lu

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numero_de_pontos_turisticos1);

    printf("Qual a área em metro quadrado: ");
    scanf(" %f", &area1); //corrigido para %f

    printf("Digite o PIB do país: ");
    scanf(" %f", &pib1); //corrigido para %f

    float densidade1;
    float percapita1;

    float especial1;

    printf("Densidade populacional: %f \n", densidade1 = (populacao1 / area1)); //corrigido para %f
    printf("PIB per capita: %f \n", percapita1 = (pib1 / populacao1)); //corrigido para %f

    printf("Especial: %f", especial1 = (populacao1 + numero_de_pontos_turisticos1 + area1 + pib1 + percapita1 - densidade1));

    


    //Segunda carta do jogo

    char estado2, cidade2 [20];
    unsigned long int populacao2;
    int codigo2, numero_pontos_turisticos2;
    float area2, pib2;
    

    printf("\n");
    
    printf("CARTA DE NÚMERO 02 \n");

    printf("\n");

    printf("Estado ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf(" %d", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade2);

    printf("Qual é o número da população? ");
    scanf(" %lu", &populacao2); //corrigido para %lu

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numero_pontos_turisticos2);

    printf("Qual a área em metros quadrados? ");
    scanf(" %f", &area2); //corrigido para %f

    printf("Digite o PIB do País: ");
    scanf(" %f", &pib2); // corrigido para %f

    // novas informacoes
    float densidade2;
    float percapita2;

    float especial2;

    printf("Desnidade populacional: %f\n", densidade2 =(populacao2 / area2)); //corrigido para %f
    printf("PIB per capita: %f\n", percapita2 = (pib2 / populacao2)); //corrigido para %f

    printf("Especial: %f", especial2 = (populacao2 + numero_pontos_turisticos2 + area2 + pib2 + percapita2 - densidade2));

    printf("\n");
    printf("COMPARAÇÕES DE CARTAS!\n");
    printf("\n");

    printf("Para cada comparação, se o resultado for 1, a carta 1 ganhou, se for 0, a carta 2 ganhou \n");
    
    printf("População: %d \n", populacao1 > populacao2);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos1 > numero_pontos_turisticos2);
    printf("Area: %d \n", area1 > area2);
    printf("PIB: %d \n", pib1 > pib2);
    printf("Densidade populacional: %d \n", densidade1 < densidade2);
    printf("PIB per capita: %d \n", percapita1 > percapita2); // operador de atribuição corrigido




    /*
   Observação: O scanf não aceita números float com múltiplos pontos (ex: 400.200.300), 
   causando erro ao processar a entrada. Isso impede a leitura correta e pode travar o programa, 
   pois o buffer de entrada mantém o valor inválido.
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
