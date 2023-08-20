#include <stdio.h>

// Fungsi forward
int faktorial();


int main() {
    int angka = 5;
    printf("Faktorial dari %d adalah %d\n", angka, faktorial(angka));
    
    return 0;
}
 
 //fungsi rekursif
int faktorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

