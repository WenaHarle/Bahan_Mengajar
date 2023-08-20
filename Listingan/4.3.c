#include <stdio.h>

int faktorial(int x);

int main() {
    int nilai, hasil;
    printf("Masukkan Nilai Batas: ");
    scanf("%d", &nilai);
    hasil = faktorial(nilai);
    printf("Hasil: %d", hasil);
    return 0;
}

int faktorial(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * faktorial(x - 1);
    }
}
