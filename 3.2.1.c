#include <stdio.h>

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
	int index;
    printf("Pilih index array : ");
   	scanf("%d", &index);
   	printf("Angka dari index ke-%d adalah %d", index,angka[index]);

    return 0;
}
