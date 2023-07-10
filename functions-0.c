#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y) {
    int z = x + y;

    printf("&x = %p, x = %d\n", &x, x);
    printf("&y = %p, y = %d\n", &y, y);
    printf("&z = %p, z = %d\n\n", &z, z);

    return z;
}

int main() {
    int a = 10;
    int b = 10;
    int c;

    c = soma(a, b);

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);
    
    return 0;
}