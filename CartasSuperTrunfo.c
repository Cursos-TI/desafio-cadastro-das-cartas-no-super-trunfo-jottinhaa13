#include <stdio.h>

// Desafio Super Trunfo - Cidades

int main() {
    printf("Bem-vindos ao Super Trunfo!\n");

    char A, B;
    char A01[3], B02[3];
    char SaoPaulo[50], Ceara[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Carta A01
    printf("Dado da carta: \n");
    scanf("%c", &A);

    printf("Código da carta: \n");
    scanf("%s", A01);

    printf("Digite o Estado: \n");
    scanf("%s", &SaoPaulo);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Dado da Carta: %c\n", A);
    printf("Código da Carta: %s\n", A01);
    printf("Nome da Cidade: %s\n", SaoPaulo);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    //Carta B02

    printf("Dado da carta: \n");
    scanf("%c", &B);

    printf("Código da carta: \n");
    scanf("%s", &B02);

    printf("Digite o Estado: \n");
    scanf("%s", &Ceara);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Dado da Carta: %c\n", B);
    printf("Código da Carta: %s\n", B02);
    printf("Nome da Cidade: %s\n", Ceara);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
