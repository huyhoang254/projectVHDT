#include <stdio.h>
#include "Hoctap.h"
void nhapQTHT(HT *d, HT *e, int *n)
{

	int i,j;
	float tong[100],cong=0;
	int m;
	for(i=0;i<n;i++)
	{
		printf("\nNhap qua trinh hoc tap cua hoc vien\n");
		printf("---Sinh vien: %s\n",d[i].maSV.masv);	
		printf("--Nhap diem thi--\n");
		for(j=0;j<2;j++)
			{
				printf(" Mon %s: ",e[j].mamh.tenMH);scanf("%f",&d->diemThi[j]);
				fflush(stdin);
				printf(" Nhap so buoi di hoc: (<%d)",d[j].mamh.soBuoiHoc);scanf("%d",&d->soBuoidihoc[j]);
				d->diemDK[j]=d->soBuoidihoc[j]/d->mamh.soBuoiHoc*10;
				tong[j]=0.3*d->diemDK[j]+0.7*d->diemThi[j];
				cong=cong+tong[j];
				d->diemTB[i]=cong/j;
			}
	}
	
	
}
void inQTHT(HT *d, HT *e,int n)
{

	int i;
	printf("----Qua trinh hoc tap cua Sinh vien----\n");
	for(i=0;i<n;i++)
	{
		printf("\n\nSinh vien %s: ",d[i].maSV.masv);
		printf("\nDiem chuyen can: %s",d[i].diemDK);
		printf("\n--Ma mon hoc: %s---",d[i].mamh.maMH);
		printf("\n Mon %s: %d",d[i].mamh.tenMH,d[i].diemThi);
	}	
}
