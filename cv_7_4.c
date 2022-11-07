#include <stdio.h>

void prehod(int*, int*);

int main()
{
    int a, b;
    printf("Zadaj hodnotu premennej a: \n");
    scanf("%d", &a);
    printf("\nZadaj hodnotu premennej b: \n");
    scanf("%d", &b);
    prehod(&a, &b);
    printf("\nHodnota a:%d, b:%d", a, b);
    return 0;
}

void prehod(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
