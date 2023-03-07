#include <stdio.h>
#include <stdlib.h>

//mot cai ham tra ve co tham so dau vao
//tham so do chia lam 2 loai la tham tri va tham chieu

//muôn thay dôi gia tri cua vung nho minh phai truyen vao dia chi
//tham tri: truyen vao mot gia tri 
//tham chieu: la truyen vao dia chi o nho cu bien,do do khi ham thay doi gia tri cua bien o ben trong ham thi gia tri ban dau cua bien da bi thay doi ke ca khi ra ngoai ham

/*void giam1DonVi(int *var)//truyen vao mot dia chi
{
	*var = *var - 1 ; // x = x-1
	//var: dia chi truyen vao
	//*var: gia tri tai vung dia chi truyen vao
}
void main()
{
	int x = 100;
	printf("Truoc: %d\n", x);
	giam1DonVi(&x);
	printf("Sau: x = %d\n", x);
}*/
//========================================//
//Bài 1: giai phuong trinh bat nhat ax + b = 0
//nêu a = 0  
//      + b = 0 => Phuong trình vô sô nghiêm
//      + b # 0 => Phuong trình vô nghiêm
//    a # 0 => x = -b/a

float giaiPhuongTrinhBac1(float *a, float *b)  //tham so truyen vao float
{//float nay co nghia la tham so tra ve co kieu du lieu la float

	printf("Nhap a:");
	scanf("%f", a); //nêu cho khai bao ham ko co dau * ,cho nay khong co dau & ,duoi kia ko co du & thi chi gia 1 phuong trinh
	                        //chi duoc dung gia tri cua a,b hcu khong thay doi duoc
	printf("Nhap b:");
	scanf("%f", b);
	float res;
	if (*a == 0)
	{
		if(*b == 0)
		{
			printf("Phuong trình có vô sô nghiêm");
		}
		else
		{
			printf("Phuong trình vô nghiem");
		}
    }
	else
	{
		res = (-*b)/(*a);
	}
	return res;
	}
int main()
{
	float KQ;
	float a,b;
	KQ = giaiPhuongTrinhBac1(&a,&b);
	printf("Nghiem cua phuong trinh la z = %f\n", KQ);
}

