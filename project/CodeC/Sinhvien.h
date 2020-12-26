#include "Date.h"

//Sinhvien.h luu nguyen mau
typedef struct
{
	char masv[15];
	char hoten[50];
	int gt; //0-nu, 1-nam, 2-khac
	Date;
	char noisinh[50];
	char lop[10];
} SV;

void nhapSV(SV *d);
void inSV(SV d);
void nhapDSSV(SV *d,int *n);
void inDSSV(SV *d, int n);
int timSV(SV *d, int n);
void ghiDSSV(SV *d, int n);
void docDSSV(SV *d, int *n);

