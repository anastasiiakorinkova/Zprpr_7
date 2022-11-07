#include <stdio.h>
#include <stdlib.h>

void createRow(int cis, int *nums)
{
    if (!cis % 2)
    {
        for (int i = 0; i < 5; i++)
        {
            nums[i] = 32 + (i * 2);
            if (i == 0)
            {
                nums[i] = 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            nums[i] = 73 + (i * 2);
            if (i == 0)
            {
                nums[i] = 73;
            }
        }
    }
}

int main()
{
    int num;

    printf("Zadajte cislo: \n");
    scanf("%d", &num);

    int *numb;
    numb = (int *)malloc(5 * sizeof(int));

    createRow(num, numb);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", numb[i]);
    }

    return 0;
}
