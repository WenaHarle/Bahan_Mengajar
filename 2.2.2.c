#include <stdio.h>

int main() {
    int number;

    printf("Masukkan Angka: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Angka bernilai positif.\n");
    } else if (number < 0) {
        printf("Angka bernilai negartif.\n");
    } else {
        printf("Angka adalah nol");
    }
    return 0;
}

