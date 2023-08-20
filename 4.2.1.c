#include <stdio.h>
void cetakParameter(int angka) // —>Parameter Formal
{ 
    printf("Nilai parameter: %d\n", angka);
}

int main() {
    int nilai = 10;

    cetakParameter(nilai); //—>Parameter Formal
    
    return 0;}

