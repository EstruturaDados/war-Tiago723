#include <stdio.h>
#include <string.h>

/*
    Estrutura de dados do território.
    Cada território possui:
    - nome: nome do território (ex: Brasil)
    - cor: cor do exército (ex: Azul)
    - tropas: quantidade de tropas nesse território
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5]; // Vetor para armazenar 5 territórios
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        printf("Cadastro do %dº território:\n", i + 1);

        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome); // Lê até 29 caracteres, incluindo espaços

        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("=== Territórios Cadastrados ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
