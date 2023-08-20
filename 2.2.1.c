#include <stdio.h>

int main() {
    int age;

    printf("Masukkan umurmu: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Kamu sudah dewasa :)\n");
    }

    return 0;
}

