#include <stdio.h>
#include <stdlib.h>

float panjang, lebar, hasil;

void tampil_masukan(void) { // fungsi untuk menginput ukuran
    printf("Masukkan Nilai Panjang: ");
    scanf("%f", &panjang);
    printf("Masukkan Nilai Lebar: ");
    scanf("%f", &lebar);
}

float perhitungan(float x, float y) { // fungsi untuk operasi luas
    
	return (x * y);
    
}

int main() { //fungsi utama
    tampil_masukan();
    hasil = perhitungan(panjang, lebar);
    printf("Luas Persegi: %.2f", hasil); 
}

