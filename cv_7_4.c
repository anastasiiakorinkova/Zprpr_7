#include <stdio.h>

void swap(int *ap, int *bp)
{
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
}
 
int main()
{
    int a, b;
    printf("Zadaj hodnotu premennej a: ");
    scanf("%d", &a);
    printf("\nZadaj hodnotu premennej b:");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\nHodnota a: %d, b: %d", a, b);
    return 0;
}
