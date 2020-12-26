//Date.c chua cac ham de xu ly ngay thang
#include <stdio.h>
#include "Sinhvien.h"
void nhapSV(SV *d)
{
	struct Date;
	fflush(stdin);
	printf("Nhap ma sinh vien:");gets(d->masv);
	printf("Nhap ho ten sinh vien:");gets(d->hoten);
	do {
		printf("Nhap gioi tinh (0-nu/1-nam/2-khac):");scanf("%d",&d->gt);
		if (d->gt<0||d->gt>2) printf("Gia tri khong hop le, hay nhap lai\n");
	} while (d->gt<0||d->gt>2);
	printf("Nhap ngay, thang, nam:");
	scanf("%d%d%d",&d->day,&d->month,&d->year);
	fflush(stdin);
	printf("Nhap noi sinh:");gets(d->noisinh);
	printf("Nhap lop:");gets(d->lop);
}
void inSV(SV d)
{
	printf("\nMa sinh vien: %s",d.masv);
	printf("\nHo ten: %s",d.hoten);
	printf("\nGioi tinh: %s",(d.gt==0?"Nu":(d.gt==1?"Nam":(d.gt==2?"Khac":""))));
	printf("\nNgay sinh: ");printf("%d/%d/%d",d.day,d.month,d.year);
	printf("\nNoi sinh: %s",d.noisinh);
	printf("\nLop: %s\n",d.lop);
}

void nhapDSSV(SV *d, int *n)
{
	int i;
	printf("\nSo sinh vien muon nhap:");scanf("%d",n);
	for (i=0;i<*n;i++)
	{
		printf("\n Sinh vien thu %d:\n",i+1);
		nhapSV(&d[i]);
	}
	printf("\nNhap du lieu thanh cong, an enter de quay ve menu chinh...");
}
void inDSSV(SV *d, int n)
{
	int i;
	printf("\n----Cac sinh vien da nhap----\n\n");
	for (i=0;i<n;i++)
	{
		printf("\nSinh vien thu %d:",i+1);
		inSV(d[i]);
	}
}

int timSV(SV *d, int n)
{
	char findText[15];
	int i,result=0;
	fflush(stdin);
	printf("\nNhap ma sinh vien muon tim:");gets(findText);
	for (i=0;i<n;i++)
		if (strcmp(d[i].masv,findText)==0)
	 		{
	 			result++;
	 			inSV(d[i]);
	 		}
	printf("\nCo %d sinh vien duoc tim thay",result);
	return result;
}

void ghiDSSV(SV *d, int n)
{
}
void docDSSV(SV *d, int *n)
{
	
}

