#include <stdio.h>
#include <conio.h>

int a = 4, b = 6;

void var_global();
void reference(int *a);

void var_automatic()
{
    int b = 2;
    printf("nilai dari variabel b = %d\n\n", b);
}

void var_extern() 
{
    int b;
    {
    extern int b;
    printf("nilai dari variabel b = %d\n\n", b);
	}
}

void var_static() {
    static int test = 1;
    printf("test = %d\n", test);
    test++;
}

int main() {
    int a = 7;
    printf("penggunaan automatic\n");
    var_automatic();
    printf("penggunaan extern\n");
    var_extern();
    printf("penggunaan static\n");
    for (int i = 1; i < 6; i++) {
        var_static();
    }
    printf("\npengiriman parameter\n");
    var_global();
    printf("Nilai a adalah %d dengan alamat %p\n", a, &a);
    reference(&a);
    printf("Nilai a setelah dipanggil adalah %d dengan alamat %p\n", a, &a);
    
    getch();
    return 0;
}
void var_global(){
	printf("Nilai a adalah %d dengan alamat %p\n",a,&a);
}

void reference(int *a)
{
	*a=*a*2;
	printf("Nilai a adalah %d dengan alamat %p\n",*a,&*a);
}