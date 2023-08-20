#include <stdio.h>
#include <stdlib.h>

const int x, y;
int a, b;
void InputKeluaran();

int main() {
    InputKeluaran();
    a = x;
    b = y;
    printf("\nHasil pengurangan menggunakan while:\n");
    while (a >= b) {
        printf("%d\n", a);
        a--;
    }
    system("PAUSE");

    a = x;
    b = y;

    printf("\nHasil pengurangan menggunakan do-while:\n");
    do {
        printf("%d\n", a);
        a--;
    } while (a >= b);
    system("PAUSE");

    a = x;
    b = y;

    printf("\nHasil pengurangan menggunakan for:\n");
    for (a - a; a >= b; a--) {
        printf("%d\n", a);
    }

    return 0;
}

void InputKeluaran(){
	printf("Masukan awal angka: ");
	scanf("%d",&x); // masukan nilai awal perulangan dengan angka 5
	printf("Masukan batas angka: ");
	scanf("%d",&y); // masukan batas perulangan maximal 3	
}