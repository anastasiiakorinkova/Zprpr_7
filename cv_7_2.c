#include <stdio.h>
#include <stdlib.h>

void vytvorPole(int cis, int *arr)
{
    int baseNumber = (cis % 2) ? 73 : 32;

    for (int i = 0; i < 5; i++)
        arr[i] = baseNumber + (i * 2);
}

int main()
{
    int cis;

    printf("Zadajte cislo \n");
    scanf("%d", &cis);

    if (cis == 0)
    {
        printf("Cislo nie je ani parne, ani neparne\n");
        exit(0);
    }

    int *arr;
    arr = (int *)calloc(5, sizeof(int));

    if (arr == NULL)
    {
        printf("Pamat na poznamky je pridelena.\n");
        exit(0);
    }

    vytvorPole(cis, arr);
    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    return 0;
}
