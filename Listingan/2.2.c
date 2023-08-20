#include <stdio.h>
#include <stdlib.h>

int nilai;

int main() {
    printf("Masukkan nilai kode fakultas (0-5)= ");
    scanf("%d", &nilai);

    printf("Hasil seleksi kondisi menggunakan if-else: ");
    if (nilai == 0) {
        printf("FT \n");
    } else if (nilai == 1) {
        printf("FIA \n");
    } else if (nilai == 2) {
        printf("FH \n");
    } else if (nilai == 3) {
        printf("FEB \n");
    } else if (nilai == 4) {
        printf("FILKOM \n");
    } else if (nilai == 5) {
        printf("FTP\n");
    } else {
        printf("Maaf nilai tersebut tidak diketahui fakultasnya \n");
    }

    printf("Hasil seleksi kondisi menggunakan switch: ");
    switch (nilai) {
        case 0: printf("FT \n"); break;
        case 1: printf("FIA \n"); break;
        case 2: printf("FH \n"); break;
        case 3: printf("FEB \n"); break;
        case 4: printf("FILKOM \n"); break;
        case 5: printf("FTP \n"); break;
        default: printf("Maaf nilai tersebut tidak diketahui fakultasnya \n"); break;
    }

    system("PAUSE");

    return 0;
}