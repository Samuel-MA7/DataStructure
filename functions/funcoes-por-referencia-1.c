#include <stdio.h>

int soma_sub(int x, int y, int *sub) {
    int soma = x + y;
    *sub = x - y;

    puts("IN THE FUNCTION");
    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&soma = %p, soma = %d\n", &soma, soma);
    printf("&sub = %p, sub = %p\n\n", &sub, sub);

    return soma;
}

int main() {
    int a = 10;
    int b = 30;
    int c;
    int d;

    puts("BEFORE THE CALL");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    printf("&d = %p, d = %d\n\n", &d, d);

    c = soma_sub(a, b, &d);

    puts("AFTER THE CALL");
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n", &c, c);
    printf("&d = %p, d = %d\n\n", &d, d);

    return 0;
}