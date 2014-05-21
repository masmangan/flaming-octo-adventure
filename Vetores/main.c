/*
 marco.mangan@pucrs.br
*/
#include <stdio.h>

#define MAX 3

int main(void)
{
    printf("Vetor, (c) 2013.\n");

    int v[MAX];
    int i;

    for(i = 0; i < MAX; i++) {
        v[i] = 100+i;
        /*scanf("%d", &v[i]);*/
    }

    for(i = 0; i < MAX; i++) {
        printf("%d\n", v[i]);
    }

/* soma */
    printf("\n");

    int soma = 0;
    for(i = 0; i < MAX; i++) {
        soma += v[i];
    }
    printf("%d\n", soma);

/* localizar valor */
    printf("\n");
    int x;
    printf("Informe o valor: ");
    scanf("%d", &x);
    int pos = - 1;
    for(i = 0; i < MAX; i++) {
        if (v[i] == x)
        {
            pos = i;
            break;
        }
    }
    printf("%d\n", pos);



    printf("*FIM*");

    return 0;
}

