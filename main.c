#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 20

struct semaforos
{
    char cor[tam];
    int id;
};

int main()
{
    int i;
    int j = 3;
    struct semaforos select[j];
    struct semaforos *ptr;

    strcpy(select[0].cor, "vermelha");
    select[0].id = 1;
    strcpy(select[1].cor, "amarela");
    select[1].id = 2;
    strcpy(select[2].cor, "verde");
    select[2].id = 3;

    ptr = &select[0];

    printf("ponteiro %p \n", ptr);

    for (i = 0; i < j; i++) {
        printf("Conteudo   %s: %d \n", select[i].cor, select[i].id);
    }

    return 0;
}
