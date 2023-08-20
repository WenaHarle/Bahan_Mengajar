#include <stdio.h>
#include <stdlib.h>

char namaDepan[10];

int main() {
    printf("Masukkan nilai string: "); // Isi dengan kata "CODING"
    scanf("%c", &namaDepan);
    printf("Output dengan placeholder %c indeks ke-0 = %c\n", namaDepan[0], namaDepan[0]);
    printf("Output dengan placeholder %c indeks ke-1 = %c\n", namaDepan[1], namaDepan[1]);
    printf("Output dengan placeholder %8s = %8s\n", namaDepan, namaDepan);
    
    system("PAUSE");
    
    return 0;
}