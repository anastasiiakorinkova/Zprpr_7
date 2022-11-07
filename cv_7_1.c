#include<stdio.h>  
  
void sucet(int, int, int*);  
  
int main()  
{  
    int a, b, s;  
  
    printf("Zadaj dve cisla oddelene medzerou:\n");  
    scanf("%d%d", &a, &b);  
  
    sucet(a, b, &s);  
  
    printf("Sucet cisel je: %d\n", s);  
  
    return 0;  
}  
  
void sucet(int x, int y, int *s)  
{  
    *s = x + y;  
}
