#include <stdio.h>
#include<string.h>


//toán tu khác thì don gian

//toan tu logic
//&& ||
/*int main ()
{
	int diem;
	printf("Nhap vao so diem cua ban: ");
	scanf("%d", &diem);
	
	if ((diem < 0) || (diem > 10))
	{
		printf("So diem khong hop le! \n");
	}
	if ((diem > 0) && (diem <=5))
	{
		printf("Ban duoc diem C \n");
	}
	if ((diem > 5 ) && (diem <= 8))
	{
		printf("Ban duoc diem B \n");
	}
	if ((diem > 8) && (diem <= 10))
	{
		printf("Ban duoc diem A");
	}
}*/
//===========================================
//Toan tu thao tac voi bit
// AND: &, OR:| ,NOT:~ , XOR: ^, dich trai: <<, Dich phai: >>
//AND voi 0 se ve 0 het , OR voi 1 ve 1 ,NOT dao gia tri cua bit, XOR voi 0 thi giu nguyen gia tri+XOR voi 1 thi dao gia tri hien tai
//===========================================
//dich bit: dich trai thi dich binh thuong,thay vao bien 0
//dich phai:tuong tu cung dich nhu the ,neu so duong thi dich phai chen them so 0,con neu so am thi thay the 1,thong thuong lam viec voi so duong (them so  0)
//nhan biet am duong? vi du neu khai bao co chu unsigned thi la so duong,con neu kieu khsc thi dua vao bit dau tien(ke chu 0b) ,neu sau 0b la so 1 thi la so am ,so 0 thi la so duong

/*Bai 1:Viet chuong trinh srt 1 bit o vi tri bat ki trong 1 byte gom 8 bit
#include <stdio.h>
#include <string.h>

int main()
{
	unsigned char x = 11101110;
	//set bit 4 len 1
	x = x |( 1 << 4);
// x = 0b11101110
// so1   00000001  dich sang trai 4 lan so 1 : 00010000
//     0b11101110
//xor    00010000 = 11111110  //biên nao xor voi 1 se doi trang thai ,xor voi 0 thi giu nguyen

}*/
//===========================================
/*Bai 2: Clear 1 bit bat ki
#include <stdio.h>
#include<string.h>
int main()
{
	unsigned char x = 0b11101110;
	//clear bit 3 ve 0
	x = x & ~(1<<3);
	//(1<<3) = 0b00001000 // ~(1<<3) = 11110111
	// 0b11101110
   //&   11110111
   //    11100110
}*/

