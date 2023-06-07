#include <stdio.h>
#include <stdlib.h>

// criando vetores dinamicos, o vetor foi preenchido usando a funcao pow que faz a potencia no elemento;
int main()
{
    int tam;
    int *vetor;
    printf("Escolha o tamanho do vetor \n");
    scanf("%d", &tam);
    vetor = (int*) malloc(sizeof (int)*tam);

    for (int i = 0; i < tam; i ++) {
    vetor[i] = pow(2,i);
    printf("Posição %d:  %d\n", i , vetor[i]);
    }
    return 0;
}
