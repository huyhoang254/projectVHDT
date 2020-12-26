#include <stdio.h>
#include <stdlib.h>
#include "Hoctap.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int chon, n1, n2;
	SV ds1[100];
	MH ds2[100];
	do {
		system("cls");
		printf("\n-----MENU-----");		
		printf("\n 1. Nhap thong tin hoc vien");
		printf("\n 2. Hien thi thong tin hoc vien");
		printf("\n 3. Tim thong tin hoc vien theo ma hoc vien");
		printf("\n 4. Nhap thong tin mon hoc");
		printf("\n 5. Hien thi thong tin mon hoc");
		printf("\n 0. Thoat");
		printf("\n--------------");
		printf("\n Ban hay chon mot cong viec: ");scanf("%d",&chon);
		switch (chon)
		{
			case 1: 
				system("cls");
				printf("\n1. Nhap thong tin hoc vien\n");
				nhapDSSV(ds1,&n1);
				getch();
				break;
			case 2: 
				system("cls");
				printf("\n2. Hien thi thong tin hoc vien\n");
				inDSSV(ds1,n1);
				getch();
				break;
			case 3: 
				system("cls");
				printf("\n3. Tim thong tin hoc vien theo ma hoc vien\n");
				timSV(ds1,n1);
				getch();
				break;
			case 4:
				system("cls");
				printf("\n4. Nhap thong tin mon hoc\n");
				nhapDSMH(ds2,&n2);
				getch();
				break;
			case 5:
				system("cls");
				printf("\n5. Hien thi thong tin mon hoc\n");
				inDSMH(ds2, n2);
				getch();
				break;
			case 6:
				system("cls");
				nhapQTHT(ds1,ds2,&n2);
				getch();
				break;
			case 7:
				system("cls");
				inQTHT(ds1,ds2,n2);
				getch();
				break;
				
			case 0:
				printf("\n Tam biet. Hen gap lai!");
				getch();
				break;
			default:
				printf("\n Lua chon khong hop le, vui long chon lai!");
				getch();
				break;
		}
	} while (chon!=0);
	
	return 0;
}
