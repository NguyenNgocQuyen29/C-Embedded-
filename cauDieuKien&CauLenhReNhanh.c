#include <stdio.h>

/*if else_if else_if else
int main()
{
	int a,b;
	printf("Nhap a va b:");
	scanf("%d %d", &a, &b);
	
	if( a == b)
	{
		printf("a = b");
	}
	else if (a > b) {
		printf("a > b");
	}
	else if (a < b){
		printf(" a < b");
	}
	else {
		printf("error");
	}
	
}*/
//=================================
/*toan tu 3 ngoi: bien = bieu thuc 1?bieu thuc 2 : bieu thuc 3
//neu bieu thuc 1 dung thi bien = bieu thuc 2,neu 1 sai thi bien bang bieu thuc 1

//viet chuong trinh nhap vao 2 so va tim max cua no
int main ()
{
	int a,b,max;
	printf("Nhap 2 so a va b:");
	scanf("%d %d", &a, &b);
	
	max = (a > b) ? a : b;
	//in ra so lon nhat
	printf("So lon nhat la: %d\n", max);
	return 0;
}*/
/*Viet chuong t?nh nhap tuoi cua nguoi xem phim va in gia tien neu tuoi nguoi xem phim > 18 la 100000d,con <18 la 50000
int main(){
	int gia_ve,tuoi_nguoi_xem;
	printf("Nhap tuoi cua ban:");
	scanf("%d", &tuoi_nguoi_xem);
	
	gia_ve = (tuoi_nguoi_xem > 18) ? 100000 : 50000;
	printf("Gia ve cua ban la: %d\n", gia_ve);
}*/
//=================================
//Cau lenh re nhanh Switch case
//nhap x y va thuc hien phep toan.
//Su khac nhau giua if else và switch case la
//if else la so sanh gia tri cua mot bieu thuc
//switch la no se so sanh expression voi case,no bang case nao thi thuc hien lenh cua case do
//expression cua switch bat buoc la hang so ,hoac neu la bieu thuc nhung ket qua la hang so 
int main()
{
	int x,y, ketqua;
	char pheptoan;
	
	printf("Nhap phep toan: ");
	scanf("%c", &pheptoan);
	printf("Nhap 2 so x va y: ");
	scanf("%d %d", &x, &y);
	
	switch(pheptoan)
	{
		case '+':
		ketqua = x + y;
		break; //phai co break de khi no thuc hien xong thi dung chu khong no lai thuc hien
		       //cau lenh phia sau,ke ca dong lenh default 
		
		case '-':
		ketqua = x - y;
		break;
		
		case '*':
		ketqua = x * y;
		break;
		
		case '/':
		ketqua = x / y;
		break;
		
		default:
		printf("Phep tinh khong hop le");			
	}
	printf("Ket qua la: %d", ketqua);	
}

