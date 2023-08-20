#include <stdio.h>
int b = 4;

int main(){
	int b = 2;
	printf("nilai lokal b = %i\n",b );
	{
		extern int b;
		printf("nilai global b = %i",b );	
	}
	
}
