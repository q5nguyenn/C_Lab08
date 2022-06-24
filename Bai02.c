#include <stdio.h>

float sum(float mang[]);

int main (void){
	float mang[] = {23.4, 55, 22.6, 3, 40.5, 18};
	float tong = sum(mang);
	printf ("Tong la: %.2f", tong);
	return 0;
}

float sum(float mang[]){
	float tong = 0;
	int i;
	for (i = 0; i < 6; i++){
		tong = tong + mang[i];
	}
	return tong;
}
