#include <stdio.h>

void display(int num1, int num2);

int main (void){
	int mang[] = {2, 8, 4, 12};
	display(mang[1], mang[2]);
	return 0;
}

void display(int num1, int num2){
	printf ("%d\n%d", num1, num2);
}
