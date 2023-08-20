#include <stdio.h>
#include <stdlib.h>

int angka[2][2] = {{1, 2}, {0, 3}};
int loop, angka_1, angka_2;

int main() {
    while (loop == loop) {
        printf("Masukkan nilai indeks yang ingin dilihat (Baris): ");
        scanf("%d", &angka_1);

        printf("Masukkan nilai indeks yang ingin dilihat (Kolom): ");
        scanf("%d", &angka_2);

        printf("Nilai array indeks ke- [%d] [%d] = %d\n", angka_1, angka_2, angka[angka_1][angka_2]);
    }

    system("PAUSE");
    return 0;
}
