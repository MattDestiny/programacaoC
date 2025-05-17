#include <stdio.h>
    
int main(){

    //Declaração de variáveis
    char estado;
    char codigo_carta[20];
    char nome_da_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //Informação da Carta 01
    //Estado: A (Ceará)
    //Codigo da Carta: A01
    //Nome da Cidade: Fortaleza
    //Quantidade da População: 2428678
    //Área em Km²: 312.353
    //Produto Interno Bruto(Em Bilhões de R$): 73.4
    //Quantidade de Pontos Turísticos: 20

    //Informação da Carta 02
    //Estado: B (Bahia)
    //Codigo da Carta: B01
    //Nome da Cidade: Salvador
    //Quantidade da População: 2417678
    //Área em Km²: 196.260
    //Produto Interno Bruto(Em Bilhões de R$): 62.954
    //Quantidade de Pontos Turísticos: 30
    

    //Cadastro das cartas
    printf("Digite um Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o código da Carta: ");
    scanf(" %s", codigo_carta);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", nome_da_cidade);

    printf("Digite a População: ");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade em Km²: ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade (exemplo: 1.23 para 1,23 bilhões de R$): ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontos_turisticos); 

    printf("Impressão da carta %s:\n", nome_da_cidade);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: %.3f\n", pib);
    printf("Quantidade de Pontos Turisticos: %d\n", pontos_turisticos);
    return 0;
}