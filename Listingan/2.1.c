#include <stdio.h>

int a = 7, b = 24, c = 25, d = 5, x, y = 4, z = 9;

int main() {
    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d, z=%d\n\n", a, b, c, d, x, y, z);
    
    printf("Operator Aritmatika\n");
    x = a + b - c * d;
    printf("a + b - c * d = %d\n", x);
    x = c / d;
    printf("c / d = %d\n\n", x);
    
    printf("Operator Penaikan dan Penurunan\n");
    x = y++ + d;
    printf("y++ + d = %d\n", x);
    x = z-- + d;
    printf("z-- + d = %d\n\n", x);
    
    printf("Operator Bitwise\n");
    x = a >> 1;
    printf("a >> 1 = %d\n", x);
    x = a & d;
    printf("a & d = %d\n", x);
    x = a ^ d;
    printf("a ^ d = %d\n\n", x);
    
    printf("Operator Kombinasional\n");
    x = c += d;
    printf("c += d = %d\n", x);
    x = a >> 1;
    printf("a >>= 1 = %d\n\n", x);
    
    printf("Operator Relasi\n");
    printf("a == b = %d\n", a == b);
    printf("b > c = %d\n", b > c);
    printf("c <= d = %d\n\n", c <= d);
    
    printf("Operator Logika\n");
    printf("(b > -a) && (b <= c) = %d\n", (b > -a) && (b <= c));
    printf("(a < c) || (a < d) = %d\n\n", (a < c) || (a < d));
    
    printf("Operator Kondisi\n");
    x = (a < b) ? a : b;
    printf("x = (a < b) ? a : b = %d\n", x);
    
    return 0;
}
