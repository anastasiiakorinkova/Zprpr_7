#include <stdio.h> 
#include <stdlib.h> 

void vytvorPole(int cis, int* arr) {


    if (cis % 2) {
        for (int i = 0; i < 5; i++) {

            arr[i] = 73 + (i * 2);
        }

    }
    else {

        for (int i = 0; i < 5; i++) {
            arr[i] = 32 + (i * 2);

        }
    }
}



int main() {
    int cis;

    printf("Zadajte cislo \n");
    scanf_s("%d", &cis);

    int* arr;
    arr = (int*)malloc(5 * sizeof(int));

    vytvorPole(cis, arr);

    if (cis == 0) {
        printf("Cislo nie je ani parne, ani neparne\n");

    }

    else {
        for (int i = 0; i < 5; i++) {

            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
