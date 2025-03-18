// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Aluno Andre Costa - 202503001421

#include <stdio.h>

int main() {

    // Declaração das variáveis do sistema
    char Estado1[2], Estado2[2], CodCarta1[3], CodCarta2[3], Cidade1[50], Cidade2[50];
    int PopCidade1, PopCidade2, PTCidade1, PTCidade2;
    float AreaCidade1, AreaCidade2, PIBCidade1, PIBCidade2;

    // Inicialização do sistema. Informação ao usuário dos objetivos do jogo.
    printf("Seja bem vindo ao SuperTrunfo das cidades brasileiras!\n");
    printf("O jogo que coloca as cidades brasileiras em uma competição sadia e divertida. Vamos começar?\n\n");

    // Explicação inicial do cadastramento das cartas.
    printf("Para iniciarmos o jogo, precisaremos do seu apoio para a criação das cartas do baralho. Pronto para nos ajudar nesta tarefa?\n\n");

    // Cadastro das Cartas:
    // Obtenção dos dados para a primeira carta
    printf("Vamos cadastrar a primeira carta!\nComeçaremos pela escolha do estado.\n\n");
    
    // Escolhendo o estado entre as opções disponíveis e o código da carta
    printf("Escolha uma opção, sendo:\nA - São Paulo\nB - Minas Gerais\nC - Santa Catarina\nD - Mato Grosso\nE - Bahia\nF - Ceara\nG - Amazonas\nH - Roraima\n");
    scanf("%s",Estado1);

    printf("Escolha o código da carta sendo as opções disponíveis entre 01 e 04: \n");
    scanf("%s",CodCarta1);

    printf("Informe o nome da cidade escolhida: \n");
    scanf("%s",Cidade1);

    printf("Informe a população da cidade de %s: \n", Cidade1);
    scanf("%d", &PopCidade1);

    printf("Informe a área do município de %s: \n",Cidade1);
    scanf("%f", &AreaCidade1);

    printf("Informe o PIB do município de %s: \n",Cidade1);
    scanf("%f", &PIBCidade1);

    printf("Quantos são os pontos turísticos na cidade de %s?:\n", Cidade1);
    scanf("%d", &PTCidade1);

    // Obtenção dos dados para a segunda carta
    printf("\n\nVamos cadastrar a segunda carta!\nComeçaremos pela escolha do estado.\n\n");
    
    // Escolhendo o estado entre as opções disponíveis e o código da carta
    printf("Escolha uma opção, sendo:\nA - São Paulo\nB - Minas Gerais\nC - Santa Catarina\nD - Mato Grosso\nE - Bahia\nF - Ceara\nG - Amazonas\nH - Roraima\n");
    scanf("%s",Estado2);

    printf("Escolha o código da carta sendo as opções disponíveis entre 01 e 04: \n");
    scanf("%s",CodCarta2);

    printf("Informe o nome da cidade escolhida: \n");
    scanf("%s",Cidade2);

    printf("Informe a população da cidade de %s: \n", Cidade2);
    scanf("%d", &PopCidade2);

    printf("Informe a área do município de %s: \n",Cidade2);
    scanf("%f", &AreaCidade2);

    printf("Informe o PIB do município de %s: \n",Cidade2);
    scanf("%f", &PIBCidade2);

    printf("Quantos são os pontos turísticos na cidade de %s?:\n", Cidade2);
    scanf("%d", &PTCidade2);

    // Exibição dos Dados das Cartas:
    // Exibe os valores inseridos para cada atributo da cidade, um por linha, para a carta 01.
    printf("\n\nObrigado pelas informações. Vamos conferir?\n");
    printf("Você está cadastrando as seguintes informações para a Carta 01: \n Estado: %s\n Código da Carta: %s%s \n Nome da Cidade: %s\n População de %d habitantes\n Área de %.2f km²\n PIB: %.2f bilhões de reais\n %d pontos turísticos no município\n", Estado1, Estado1, CodCarta1, Cidade1, PopCidade1, AreaCidade1, PIBCidade1, PTCidade1);
    
    // Exibe os valores inseridos para cada atributo da cidade, um por linha, para a carta 02.
    printf("\nVocê está cadastrando as seguintes informações para a Carta 02: \n Estado: %s\n Código da Carta: %s%s \n Nome da Cidade: %s\n População de %d habitantes\n Área de %.2f km²\n PIB: %.2f bilhões de reais\n %d pontos turísticos no município\n", Estado2, Estado2, CodCarta2, Cidade2, PopCidade2, AreaCidade2, PIBCidade2, PTCidade2);

    return 0;
}