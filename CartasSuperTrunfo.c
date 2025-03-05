#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    // Nivel novato.
    // Definnindo e inicializando variáveis separadas para cada atributo da cidade.
    // Atributos: Estado, código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1;
    int codigo1;
    char cidade1 [15];
    unsigned long int populacao1; 
    int numero_de_pontos_turisticos1;
    float area1;
    float pib1;

    // declaração novas variaveis desnidade populacional e pib per capita.
    // inicialização das novas variaveis para o nível aventureiro.


    // Declaração da variavel super poder para o nível mestre.
    // Calcular o super poder somando todas as características (exeto estado, código e nome).
    // O inverso da densidade populacional (subtrair).

       
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

    //nova caracterísca superpoder: soma todos os atributos das cartas exceto estado, codigo e cidade.
    //densidade populacional é subtraida.

    //printf("testando: %f\n", densidade1);
    //printf("testando: %f\n", percapita1);

    printf("Especial: %f", especial1 = (populacao1 + numero_de_pontos_turisticos1 + area1 + pib1 + percapita1 - densidade1));

    


    //Segunda carta do jogo
    //Teste com as variáveis dentro do printf

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

    
    if (populacao1 > populacao2)
    {
      printf("Com maior número a população da carta 1 venceu!\n");
    }
    else
    {
      printf("Com maior número a população da carta 2 venceu!\n");
    }
    
    if (area1 > area2)
    {
      printf("com maior área a carta 1 venceu!\n");
    }
    else
    {
      printf("com maior área a carta 2 venceu!\n");
    }
    
    if (numero_de_pontos_turisticos1 > numero_pontos_turisticos2)
    {
      printf("Com maior número de pontos turisticos a carta 1 venceu!\n");
    }
    else
    {
      printf("Com maior número de pontos turisticos a carta 2 venceu!\n");
    }
    
    if (pib1 > pib2)
    {
      printf("Com maior PIB a carta 1 venceu!\n");
    }
    else
    {
      printf("Com maior número de pontos turisticos a carta 2 venceu!\n");
    }
    
    if (densidade1 < densidade2)
    {
        printf("Densidade populacional da carta 1 é menor, portanto leva essa rodada!\n");
    }
    else
    {
      printf("Densidade populacional da carta 2 é menor, portanto leva essa rodada!\n");
    }
    
    if (percapita1 > percapita2)
    {
      printf("Com maior PIB per capita a carta 1 ganha \n");
    }
    
    else
    {
      printf("Com maior PIB per capita a carta 2 ganha \n");
    }
    
    if (especial1 > especial2)
    {
      printf("A carta 1 possui maior poder especial, então vence!\n");
    }
    else
    {
      printf("A carta 2 possui maior poder especial, então vence!\n");
    }
    
    



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
