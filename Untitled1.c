#include <stdio.h>

float tinhtien (int sl, float gia);

void main (void)
{
	int sl;
	float tien, gia;
	printf ("Nhap vao so luong: "); scanf ("%d", &sl);
	printf ("Nhao vao gia tien: "); scanf ("%f", &gia);
	printf ("So tien phai tra la: %.2f", tinhtien(sl,gia));
}

float tinhtien (int sl, float gia)
{
	float tien;
	tien = sl * gia;
	return tien;
}
