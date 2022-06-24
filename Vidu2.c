#include <stdio.h>

int in (int ary[2][2]);
main ()
{
	int i, j;
	int ary[2][2];
	for (i = 0; i < 2; i++)	{
		for (j = 0; j < 2; j++)	{
			printf ("Nhap vao phan tu [%d][%d]: ", i + 1, j + 1);
			scanf ("%d", &ary[i][j]);
		}
	}
	printf("Mang da nhap la: \n");
	in (ary);
}

int in (int ary[2][2])
{
	int i , j;
	for (i = 0; i < 2; i++)	{
		for (j = 0; j < 2; j++)
			printf ("[%2d] ",ary[i][j]);
		printf("\n");
	}
	return 0;
}
