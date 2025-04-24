// Nome do arquivo: Super Trunfo (Novato).c
// Autor dessa versão: Ryan Kaique
// Data de criação: 18/04/2025
// Descrição: Jogo de cartas onde o jogador pode comparar dois países em quatro
// categorias diferentes.
#include <stdio.h>
#include <string.h> // Inclui a biblioteca de manipulação de strings

int main() {
  // Variáveis das cartas usando Float e int para os atributos;
  // e char para os nomes dos países, estados, cidades e códigos.
  float PIB1, PIB2, AREA1, AREA2;
  long int POP1, POP2, NPT1, NPT2;
  char PAIS1[40], PAIS2[40], ESTADO1[40], ESTADO2[40], CIDADE1[40], CIDADE2[40],
      COD1[20], COD2[20], resposta[1];

  // Apresentação do jogo
  printf("\033[1;31m");
  printf("Bem-vindo ao Super Trunfo!\n");
  printf("\033[0m"); // Reseta a cor do texto
  printf("Neste jogo, você irá comparar dois países em quatro categorias:\n");
  printf("Primeiro insira os dados da primeira carta!\n");
  printf("Depois insira os dados da segunda carta!\n");
  // Coletando os dados da primeira carta
  printf("\n\n=== Carta 1 ===\n");

  printf("Digite o nome do país: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(PAIS1, sizeof(PAIS1),
        stdin); // Corrigido para reconhecer espaços no nome do país
  PAIS1[strcspn(PAIS1, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o código da carta(EX: A01): ");
  scanf_s("%s", COD1);
  printf("Digite o nome do estado: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(ESTADO1, sizeof(ESTADO1),
        stdin); // Corrigido para reconhecer espaços no nome do estado
  ESTADO1[strcspn(ESTADO1, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o nome da cidade: ");
  fgets(CIDADE1, sizeof(CIDADE1),
        stdin); // Corrigido para reconhecer espaços no nome da cidade
  printf("Digite o PIB(use ponto, não virgula): ");
  scanf_s("%f", &PIB1);
  printf("Digite a população: ");
  scanf_s("%ld", &POP1);
  printf("Digite a área: ");
  scanf_s("%f", &AREA1);
  printf("Digite o número de pontos turísticos: ");
  scanf_s("%ld", &NPT1);

  // Adicionando os dados da segunda carta
  printf("\n\nAgora insira os dados da segunda carta!\n");

  printf("\n\n=== Carta 1 ===\n");

  printf("Digite o nome do país: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(PAIS2, sizeof(PAIS2),
        stdin); // Corrigido para reconhecer espaços no nome do país
  PAIS2[strcspn(PAIS2, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o código da carta(EX: B01): ");
  scanf_s("%s", COD2);
  printf("Digite o nome do estado: ");
  getchar();
  fgets(ESTADO2, sizeof(ESTADO2),
        stdin); // Corrigido para reconhecer espaços no nome do estado
  ESTADO2[strcspn(ESTADO2, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o nome da cidade: ");
  getchar(); // Limpa o buffer do teclado para evitar problemas com fgets
  fgets(CIDADE2, sizeof(CIDADE2),
        stdin); // Corrigido para reconhecer espaços no nome da cidade
  CIDADE2[strcspn(CIDADE2, "\n")] = '\0'; // Remove o caractere de nova linha
  printf("Digite o PIB : ");
  scanf_s("%f", &PIB2);
  printf("Digite a população: ");
  scanf_s("%ld", &POP2);
  printf("Digite a área(M²): ");
  scanf_s("%f", &AREA2);
  printf("Digite o número de pontos turísticos: ");
  scanf_s("%ld", &NPT2);

  // Densidade populacional
  float DENSIDADE1 = POP1 / AREA1; // Calculo da densidade populacional
  float DENSIDADE2 = POP2 / AREA2;
  // PIB per capita
  float PIBPC1 = PIB1 / POP1; // Calculo do PIB per capita
  float PIBPC2 = PIB2 / POP2;

  // super poder
  float SUPERPODER1 = PIB1 + PIBPC1 + AREA1 + POP1 + NPT1 +
                      (1 / DENSIDADE1); // Calculo do super poder
  float SUPERPODER2 = PIB2 + PIBPC2 + AREA2 + POP2 + NPT2 + (1 / DENSIDADE2);

  // Mostrando os dados da primeira carta
  printf("\n\nAqui estão as cartas!:\n");

  printf("=== Primeira Carta ===\n");

  printf("País: %s\n", PAIS1);
  printf("Código: %s\n", COD1);
  printf("Estado: %s\n", ESTADO1);
  printf("Cidade: %s\n", CIDADE1);
  printf("PIB: %.2f\n", PIB1);
  printf("População: %ld\n", POP1);
  printf("Área(KM²): %.2f\n", AREA1);
  printf("Número de pontos turísticos: %ld\n", NPT1);
  printf("Densidade populacional: %.2f hab/km²\n", DENSIDADE1);
  printf("PIB per capita: %.8f bilhões/pessoa\n", PIBPC1);
  printf("Super Poder: %.2f\n", SUPERPODER1);

  // Mostrando os dados da segunda carta
  printf("\n\n=== Segunda Carta ===\n");

  printf("País: %s\n", PAIS2);
  printf("Código: %s\n", COD2);
  printf("Estado: %s\n", ESTADO2);
  printf("Cidade: %s\n", CIDADE2);
  printf("PIB(Bilhoes): %.2f\n", PIB2);
  printf("População: %ld\n", POP2);
  printf("Área(KM²): %.2f\n", AREA2);
  printf("Número de pontos turísticos: %ld\n", NPT2);
  printf("Densidade populacional: %.2f hab/km²\n", DENSIDADE2);
  printf("PIB per capita: %.8f bilhões/pessoa\n", PIBPC2);
  printf("Super Poder: %.2f\n", SUPERPODER2);

  printf("gostaria de ver os resultados? (s/n): ");
  scanf_s(" %c", &resposta, sizeof(resposta));
  if (resposta == 's' || resposta == 'S') {
    printf("\n\n=== Resultados ===\n");
  } else {
    printf("\n\nVocê escolheu não ver os resultados.\n");
    return 0; //  <== Encerra o programa
  }
  // Comparação das cartas
  printf("\n\n=== Comparação das cartas ===\n");
  // Comparando os super poderes
  if (SUPERPODER1 > SUPERPODER2) {
    printf("\n\nO país %s é mais forte que o país %s!\n", PAIS1, PAIS2);
  } else if (SUPERPODER1 < SUPERPODER2) {
    printf("\n\nO país %s é mais forte que o país %s!\n", PAIS2, PAIS1);
  } else {
    printf("\n\nOs países %s e %s são iguais!\n", PAIS1, PAIS2);
  }
  // Comparando o PIB
  if (PIB1 > PIB2) {
    printf("\n\nO país %s tem um PIB maior que o país %s!\n", PAIS1, PAIS2);
  } else if (PIB1 < PIB2) {
    printf("\n\nO país %s tem um PIB maior que o país %s!\n", PAIS2, PAIS1);
  } else {
    printf("\n\nOs países %s e %s têm o mesmo PIB!\n", PAIS1, PAIS2);
  }
  // Comparando a população
  if (POP1 > POP2) {
    printf("\n\nO país %s tem uma população maior que o país %s!\n", PAIS1,
           PAIS2);
  } else if (POP1 < POP2) {
    printf("\n\nO país %s tem uma população maior que o país %s!\n", PAIS2,
           PAIS1);
  } else {
    printf("\n\nOs países %s e %s têm a mesma população!\n", PAIS1, PAIS2);
  }
  // Comparando a área
  if (AREA1 > AREA2) {
    printf("\n\nO país %s tem uma área maior que o país %s!\n", PAIS1, PAIS2);
  } else if (AREA1 < AREA2) {
    printf("\n\nO país %s tem uma área maior que o país %s!\n", PAIS2, PAIS1);
  } else {
    printf("\n\nOs países %s e %s têm a mesma área!\n", PAIS1, PAIS2);
  }
  // Comparando a densidade populacional
  if (DENSIDADE1 > DENSIDADE2) {
    printf(
        "\n\nO país %s tem uma densidade populacional maior que o país %s!\n",
        PAIS1, PAIS2);
  } else if (DENSIDADE1 < DENSIDADE2) {
    printf(
        "\n\nO país %s tem uma densidade populacional maior que o país %s!\n",
        PAIS2, PAIS1);
  } else {
    printf("\n\nOs países %s e %s têm a mesma densidade populacional!\n", PAIS1,
           PAIS2);
  }
  // Comparando o PIB per capita
  if (PIBPC1 > PIBPC2) {
    printf("\n\nO país %s tem um PIB per capita maior que o país %s!\n", PAIS1,
           PAIS2);
  } else if (PIBPC1 < PIBPC2) {
    printf("\n\nO país %s tem um PIB per capita maior que o país %s!\n", PAIS2,
           PAIS1);
  } else {
    printf("\n\nOs países %s e %s têm o mesmo PIB per capita!\n", PAIS1, PAIS2);
  }
  // Comparando o número de pontos turísticos
  if (NPT1 > NPT2) {
    printf("\n\nO país %s tem mais pontos turísticos que o país %s!\n", PAIS1,
           PAIS2);
  } else if (NPT1 < NPT2) {
    printf("\n\nO país %s tem mais pontos turísticos que o país %s!\n", PAIS2,
           PAIS1);
  } else {
    printf("\n\nOs países %s e %s têm o mesmo número de pontos turísticos!\n",
           PAIS1, PAIS2);
  }
  printf("\n\n=== Fim do jogo ===\n");
  printf("Obrigado por jogar!\n");  
  printf("Pressione qualquer tecla para sair...\n");
  scanf_s("%s", resposta, sizeof(resposta)); 


  return 0;

}
// Fim do programa
