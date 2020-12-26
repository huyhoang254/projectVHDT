#include "Sinhvien.h"
#include "Monhoc.h"
typedef struct
{
	SV maSV;
	MH mamh;
	int soBuoidihoc[100];
	float diemDK[100];
	float diemThi[100];
	float diemTB[100];
	char XL[10];
} HT;
void nhapQTHT(HT *d, HT *e, int *n);
void inQTHT(HT *d, HT *e, int n);
