#include <stdio.h>
#include <stdlib.h>

float panjang, lebar, hasil;

void tampil_masukan(void) {
    printf("Masukkan Nilai Panjang: ");
    scanf("%f", &panjang);
    printf("Masukkan Nilai Lebar : ");
    scanf("%f", &lebar);
}

float perhitungan(float x, float y) {
    return (x * y);
}

int main() {
    tampil_masukan();
    hasil = perhitungan(panjang, lebar);
    printf("Luas Persegi : %.2f", hasil);
    return 0;
}
