#include <stdio.h>

void multiplicate(int, int*, int*); 

void result(int); 

int main() {
    int a, b, s;

    printf("Zadaj 1. cislo: \n");
    scanf("%d", &a);

    multiplicate(a, &b, &s);

    result(s);
    return 0;
}

void multiplicate(int a, int* b, int* s) {
    printf("Zadaj 2. cislo: \n");
    scanf("%d", b);
    *s = a * *b;
}

void result(int s) {
    printf("Vysledok je: %d", s);
}
