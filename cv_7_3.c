#include <stdio.h>

void multiplicate(int a, int* b, int* s) {
    printf("Zadaj 2 cislo = ");
    scanf("%d", b);

    *s = a * (*b);
}

void result(int s) {
    printf("Vysledok je:%d", s);
}

int main() {
    int a, b, s;

    printf("Zadaj 1 cislo  = ");
    scanf("%d", &a);

    multiplicate(a, &b, &s);

    result(s);
    return 0;
}