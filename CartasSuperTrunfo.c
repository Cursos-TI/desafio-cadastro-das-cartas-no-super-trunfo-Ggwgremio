#include <stdio.h>

int main() {
    char codigo[4];           // Código da carta (Ex: A01, B02)
    int Populacao = 1;        // População da cidade
    float Area = 1;           // Área da cidade em km²
    float PIB = 1;            // PIB da cidade em bilhões
    int PontosTuristicos = 1; // Número de pontos turísticos

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade (em km²): ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &PontosTuristicos);

    return 0;

}