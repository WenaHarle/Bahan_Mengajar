#include <stdio.h>
#include <string.h>

// Definisi struktur Mahasiswa
struct Mahasiswa {
    char nama[50];
    int umur;
    float ipk;
} mhs1;

int main() {
    // Mengisi data untuk mhs1
    strcpy(mhs1.nama, "John Doe");
    mhs1.umur = 20;
    mhs1.ipk = 3.75;

    // Menampilkan data mhs1
    printf("Data Mahasiswa 1:\n");
    printf("Nama: %s\n", mhs1.nama);
    printf("Umur: %d tahun\n", mhs1.umur);
    printf("IPK: %.2f\n", mhs1.ipk);

    return 0;
}

