#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de cidades.
struct Cidade {
    char nome[50];
    char codigo[10];
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade cidade1, cidade2;

    // Cadastro da primeira cidade.
    printf("Cadastro da Cidade 1:\n");
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade1.nome);  // limitei as caracteres para evitar overflow.
    printf("Digite o código da cidade: ");
    scanf(" %9s", cidade1.codigo);
    printf("Digite a população: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade.
    printf("\nCadastro da Cidade 2:\n");
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2.nome);
    printf("Digite o código da cidade: ");
    scanf(" %9s", cidade2.codigo);
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparações.
    printf("\n--- Comparação das Cidades ---\n");

    if (cidade1.populacao > cidade2.populacao)
        printf("Maior população: %s\n", cidade1.nome);
    else if (cidade1.populacao < cidade2.populacao)
        printf("Maior população: %s\n", cidade2.nome);
    else
        printf("População igual entre as cidades.\n");

    if (cidade1.area > cidade2.area)
        printf("Maior área: %s\n", cidade1.nome);
    else if (cidade1.area < cidade2.area)
        printf("Maior área: %s\n", cidade2.nome);
    else
        printf("Área igual entre as cidades.\n");

    if (cidade1.pib > cidade2.pib)
        printf("Maior PIB: %s\n", cidade1.nome);
    else if (cidade1.pib < cidade2.pib)
        printf("Maior PIB: %s\n", cidade2.nome);
    else
        printf("PIB igual entre as cidades.\n");

    return 0;
}
