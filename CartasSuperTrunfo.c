#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Andre Costa - 202503001421

int main(void) {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declaração das variáveis do sistema

    char Estado1[1], Estado2[1], Cidade01[50], Cidade02[50];
    int PopCidade01, PopCidade02, PTCidade01, PTCidade02;
    float AreaCidade01, AreaCidade02, PIBCidade01, PIBCidade02;

    // Inicialização do sistema. Informação ao usuário dos objetivos do jogo.
    printf("Seja bem vindo ao SuperTrunfo das cidades brasileiras!\n");
    printf("O jogo que coloca as cidades brasileiras em uma competição sadia e divertida. Vamos começar?\n\n");

    // Explicação inicial do cadastramento das cartas.
    printf("Para iniciarmos o jogo precisaremos do seu apoio para a criação das cartas do baralho. Pronto para nos ajudar nesta tarefa?\n\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Vamos cadastrar a primeira carta!\nComeçaremos pela escolha do estado.\n\n");
    printf("Escolha uma opção, sendo:\nA - São Paulo\nB - Minas Gerais\nC - Santa Catarina\nD - Mato Grosso\nE - Bahia\nF - Ceara\nG - Amazonas\nH - Roraima\n");
    scanf("%c",Estado1);
    char CodCarta01[3] = "01";
    strcat(Estado1,CodCarta01);
    printf("Código da Carta Cadastrada:%s\n",Estado1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
