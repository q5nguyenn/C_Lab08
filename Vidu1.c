#include <stdio.h>

float tinhtien (int sl, float gia);

void main (void){
	char c;
	int sl;
	float tien, gia, tong = 0;
	do {
		printf ("Nhap vao so luong: "); scanf ("%d", &sl);
		printf ("Nhao vao gia tien: "); scanf ("%f", &gia);
		printf ("So tien lan nay la: %.2f", tinhtien(sl,gia));
		tong += tinhtien(sl, gia); 
		printf ("\nTiep tuc nhap an y! ");
		fflush (stdin);
		c = getchar();
	} while (c == 'y');
	printf ("Tong tien phai tra la: %.2f", tong);
}

float tinhtien (int sl, float gia){
	float tien;
	tien = sl * gia;
	return tien;
}
