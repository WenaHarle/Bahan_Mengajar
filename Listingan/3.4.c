#include <stdio.h>
#include <windows.h>

struct pemasukan {
    int total;
};

struct pengeluaran {
    char nama[10];
    int harga, sisa;
    struct pemasukan saldo;
};

int main() {
    struct pengeluaran keluar;

    printf("Saldo: ");
    scanf("%d", &keluar.saldo.total);

    printf("Harga: ");
    scanf("%d", &keluar.harga);

    keluar.harga -= keluar.harga;
    printf("Harga %s: %d\n", keluar.nama, keluar.harga);

    printf("Sisa uang: %d\n", keluar.sisa);

    system("PAUSE");

    printf("Nama Pengeluaran: ");
    scanf("%s", keluar.nama);

    keluar.sisa = keluar.saldo.total - keluar.harga;

    system("cls");
    printf("Data Anda\n");
    printf("Saldo: %d\n", keluar.saldo.total);

    return 0;
}