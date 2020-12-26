#include<stdio.h>
#include "Monhoc.h"
void nhapMH(MH *e)
{
	fflush(stdin);
	printf("Nhap ten mon hoc: ");gets(e->tenMH);
	printf("Thiet lap ma mon hoc: ");gets(e->maMH);
	printf("Nhap so buoi hoc: ");scanf("%d",&e->soBuoiHoc);
	fflush(stdin);
}
void inMH(MH e)
{
	printf("\nTen mon hoc: %s",e.tenMH);
	printf("\nMa mon hoc: %s",e.maMH);
	printf("\nSo buoi hoc: %d\n",e.soBuoiHoc);
}
void nhapDSMH(MH *e, int *n)
{
	int i;
	printf("\nSo mon can nhap:");scanf("%d",n);
	for (i=0;i<*n;i++)
	{
		printf("\nMon hoc thu %d\n",i+1);
		nhapMH(&e[i]);
	}
	printf("\nNhap du lieu thanh cong, an enter de quay ve menu chinh...");
}
void inDSMH(MH *e, int n)
{
	int i;
	printf("\n----Cac mon hoc da nhap----\n\n");
	for (i=0;i<n;i++)
	{
		printf("\n  Mon hoc thu %d",i+1);
		inMH(e[i]);
	}
}
