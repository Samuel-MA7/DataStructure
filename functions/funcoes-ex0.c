#include <stdio.h>

void troca(int *x, int *y){
    puts("IN THE FUNCTION 1");
    printf("&x = %p, x = %p\n", &x, x);
    printf("&y = %p, y = %p\n\n", &y, y);

    int aux = *x;
    *x = *y;
    *y = aux;

    puts("IN THE FUNCTION 2");
    printf("&x = %p, x = %p\n", &x, x);
    printf("&y = %p, y = %p\n", &y, y);
    printf("&aux = %p, aux = %d\n\n", &aux, aux);
}

int main() {
    int a = 10;
    int b = 30;

    puts("BEFORE THE FUNCTION");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n\n", &b, b);

    troca(&a, &b);

    puts("AFTER THE FUNCTION");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n\n", &b, b);
}