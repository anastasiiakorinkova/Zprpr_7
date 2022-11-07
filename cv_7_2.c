#include <stdio.h> 
#include <stdlib.h> 

void vytvorPole(int cis, int* nums) {
    if (cis % 2) {
        for (int i = 0; i < 5; i++) {
            nums[i] = 73 + (i * 2);
            if (i == 0) {
                nums[i] = 73;
            }
        }
        
    }
    else {
        for (int i = 0; i < 5; i++) {
            nums[i] = 32 + (i * 2);
            if (i == 0) {
                nums[i] = 32;
            }
        }
    }
}

int main() {
    int cis;

    printf("Zadajte cislo \n");
    scanf("%d", &cis);

    int* nums;
    nums = (int*)malloc(5 * sizeof(int));

    vytvorPole(cis, nums);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}
