#include <stdio.h>
#include <stdlib.h>

#define ID "admin"
#define PASS 1234

int login(char name[10], int pass);
void menu();
int check(char c);
int ruttien(int *tongtien);
int chuyenkhoan(int id,int *tongtien);
void sodu(int tongtien);

int main (void){
//Nhap vao tai khoan va mat khau, kiem tra dieu kien.
	int tongtien = 1000000000, tk;
    char name[10];
    char c;
    int pass, i = 0, t = 1;
    do {
        printf ("\nNhap vao ten dang nhap:\t");
        fflush(stdin);
        gets (name);
        printf ("Nhap vao pass:\t\t");
        scanf ("%d", &pass);
        if (login(name, pass) == 1){
        	printf ("Ban da nhap dung ten va mat khau!\n");
        	break;
		}      
        else {
        	i++;
        	if (i == 3){
        		printf ("\nBan da nhap sai ten hoac mat khau qua 3 lan!\nTHE BI KHOA!");
        		t = 0;
    			exit(0);
			}
			else {
				printf ("Ban da nhap sai ten hoac mat khau!\nMoi ban nhap lai!\n");
			}		
		}
    } while (1);
    
// Menu chuong trinh
    if (t == 0) exit (0);
	do {
		int chon;
		menu();
		scanf("%d", &chon);
		switch (chon){
		case 1: ruttien(&tongtien); break;
		case 2: {
			printf ("Nhap vao STK can chuyen: ");
			scanf ("%d", &tk);
			chuyenkhoan(tk, &tongtien);break;
		}
		case 3: sodu(tongtien);break;
		case 4:{
			printf ("Hen gap lai ban lan sau!"); 
			exit(0);
		} 
		default: printf ("Ban da nhap sai! Chon lai tu 1 den 4!\n");
		}
		printf ("Ban co muon tiep tuc khong?\nNhap y de tiep tuc ");
		fflush(stdin);
		c = getchar ();
	} while (check(c) == 1);
}

int login(char name[10], int pass){
    if (strcmp(name, ID) == 0 && pass == PASS)
        return 1;
    else return 0;
}

void menu(){
	printf ("\n****************************\n");
	printf ("* Moi ban chon:            *\n");
	printf ("* 1. Rut tien              *\n");
	printf ("* 2. Chuyen khoan          *\n");
	printf ("* 3. Hien thi so du        *\n");
	printf ("* 4. Thoat chuong trinh    *\n");
	printf ("****************************\n");
}

int ruttien(int *tongtien){
	int num;
	do {
		printf ("Nhap vao so tien can rut: ");
		scanf ("%d", &num);
		if (num % 50000 == 0 && num < 30000000 && num >= 50){
		printf ("Ban da rut %dvnd", num);
		*tongtien = *tongtien - num;
		printf ("\nSo tien con lai trong tai khoan la: %dvnd\n",*tongtien);
	    break;  
		}
		else
			printf ("So tien phai la boi cua 50.000 va nho hon 3.000.000\n");
	} while (1);
}

int chuyenkhoan(int id,int *tongtien){
	int num;
	printf ("Nhap vao so tien can chuyen: ");
	scanf ("%d", &num);
	*tongtien = *tongtien - num;
	printf ("Ban da chuyen %dvnd den STK %d\n", num, id);
	printf ("So tien con lai trong tai khoan la %dvnd\n", *tongtien);	
}

void sodu(int tongtien){
	printf ("So du hien tai la: %d\n", tongtien);	
}

int check(char c){
	if (c == 'y') return 1;
	else return 0;
}










