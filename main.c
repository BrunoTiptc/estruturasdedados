#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

struct tpilha {
    int dados[tamanho];
    int ini;
    int fim;
    };
struct tpilha pilha;

int main()
{
    int op = 1;
    pilha.ini = 0;
    pilha.fim = 0;
    while (op != 0) {
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op) {
            case 1:
                pilha_entrar();
                break;
            case 2:
                pilha_sair();
                break;
                }
            }
    return 0;
}

void pilha_mostrar() {
    int i;
    printf("[ ");
    for (i=0; i<tamanho; i++) {
        printf("%d ", pilha.dados[i]);
        }
    printf("] \n\n");
}

void pilha_entrar () {
    if (pilha.fim == tamanho) {
        printf("A pilha esta cheia impossivel empilhar mais elementos \n");
        }
    else {
    printf("Digite o valor a ser empilhado:");
    scanf("%d", &pilha.dados[pilha.fim]);
    pilha.fim++;
}}

void pilha_sair () {
     if (pilha.ini == pilha.fim) {
        printf("A pilha esta vazia nao tem nada para desempilhar \n");
        }
    else {
    pilha.dados[pilha.fim-1] = 0 ;
    pilha.fim --;
    }
}

void menu_mostrar() {
    printf("\n Escolha uma opção: \n");
    printf("1 - Empilhar \n");
    printf("2 - Desimpilhar \n");
    printf("0 - Sair \n\n");
    }
