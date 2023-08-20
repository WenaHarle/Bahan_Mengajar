#include <stdio.h>

void ubahNilai(int *angka) {
    *angka = 20; 
}

int main() {
    int nilai = 10;
    
    printf("Nilai sebelum perubahan: %d\n", nilai);
    
    ubahNilai(&nilai);
    
    printf("Nilai setelah perubahan: %d\n", nilai);
    
    return 0;
}

