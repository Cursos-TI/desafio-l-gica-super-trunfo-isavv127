#include <stdio.h>

int main(){

 // Variáveis gerais
    char codigo[4], nome[50];
    unsigned long int populacao, populacao1, populacao2;
    float area, area1, area2;
    double pib, pib1, pib2;
    int pontos_turisticos, pt1, pt2;
    float densidade1, densidade2;
    double pib_pc1, pib_pc2;
    float sp1, sp2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);  

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // salvando dados carta 1
    populacao1 = populacao;
    area1 = area;
    pib1 = pib;
    pt1 = pontos_turisticos;

    densidade1 = populacao1 / area1;
    pib_pc1 = pib1 * 1000000000.0 / populacao1;
    sp1 = (float)populacao1 + area1 + (float)(pib1 * 1000000000.0) +
          (float)pt1 + (float)pib_pc1 + (1.0f / densidade1);

    // exibindo carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pt1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pib_pc1);
    printf("Super Poder: %.2f\n", sp1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);  

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // salvando oss dados carta 2
    populacao2 = populacao;
    area2 = area;
    pib2 = pib;
    pt2 = pontos_turisticos;

    densidade2 = populacao2 / area2;
    pib_pc2 = pib2 * 1000000000.0 / populacao2;
    sp2 = (float)populacao2 + area2 + (float)(pib2 * 1000000000.0) +
          (float)pt2 + (float)pib_pc2 + (1.0f / densidade2);

    // exibindo carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pt2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pib_pc2);
    printf("Super Poder: %.2f\n", sp2);

      // Comparação por População
      printf("\nComparação da carta (Atributo: População):\n");
      printf("Carta 1 - População: %lu\n", populacao1);
      printf("Carta 2 - População: %lu\n", populacao2);
  
      if (populacao1 > populacao2) {
          printf("Resultado: Carta 1 venceu!\n");
      } else if (populacao2 > populacao1) {
          printf("Resultado: Carta 2 venceu!\n");
      } else {
          printf("Resultado: Empate!\n");
      }
  int comparar;

    // Menu de comparação
    printf("\nMenu de Comparação\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de Pontos Turísticos\n");
    printf("5- Densidade Demográfica (menor vence)\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &comparar);

    switch(comparar) {
        case 1:
            printf("\nComparação por População:\n");
            printf("Carta 1 - %lu\n", populacao1);
            printf("Carta 2 - %lu\n", populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("\nComparação por Área:\n");
            printf("Carta 1 - %.2f km²\n", area1);
            printf("Carta 2 - %.2f km²\n", area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (area2 > area1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("\nComparação por PIB:\n");
            printf("Carta 1 - %.2lf bilhões\n", pib1);
            printf("Carta 2 - %.2lf bilhões\n", pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("\nComparação por Pontos Turísticos:\n");
            printf("Carta 1 - %d\n", pt1);
            printf("Carta 2 - %d\n", pt2);
            if (pt1 > pt2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pt2 > pt1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("\nComparação por Densidade Demográfica (a menor vence):\n");
            printf("Carta 1 - %.2f hab/km²\n", densidade1);
            printf("Carta 2 - %.2f hab/km²\n", densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (densidade2 < densidade1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
      return 0;
  }
