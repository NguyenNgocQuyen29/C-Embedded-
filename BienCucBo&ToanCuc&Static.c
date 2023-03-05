#include <stdio.h>
//bien cu bo: la bien duoc khai bao tron gpham vi ham nhat dinh ,chi co nghia trong pham vi do ,khi ham ket thuc thi no khong con y nghia doi voi ham khac

/*int cong2so(int x, int y)
{
	int ketqua = x + y;
	return ketqua;
}
int main()
{
	int kq = cong2so(1, 2);
	printf("Ket qua la = %d", kq); 
}*/
//bien toan cuc: bien su dung cho toan chuong trinh,khong nam trong ham nao,nam bên ngoài
//muôn xu dung bien toan cuc o mot file khac ta dung lenh "extern"
//tu khoa static
//======================================================//
//1.Biên static trong khai bao bien cuc bo
oid tangBienSo()
{
	//biên cuc bo sau khi thoat khoi ham bi thu hôi mat vung nho
	//nhung ma them static thi vung nho cua bien khong bi thu hoi
	//tuc la sau khi thoat khoi vung nho bien x khong bi mat di
	static int x = 0; //bien cuc bo
	x++;
	printf("x = %d\n",x);//neu ko co static no in ra  1 1 1 1 1
	                     //co static thi in ra 1 2 3 4 5
}
int main()
{
	tangBienSo();
	tangBienSo();
	tangBienSo();
	tangBienSo();
	tangBienSo();
}
//su khac nhau giua bien toan cuc va bien cuc bo + static
//mac du khong bi mat di vung nho cua bien nhung chung ta van se khong su dung no o ngoai vong lap duoc
//con bien toan cuc thi su dung duoc
//======================================================//
//2.Bien static trong khai bao bien toan cuc
//biên static ket hop voi bien toan cuc co nghia la "thang bien nay chi duoc su dung o 1 file,khong cho file nao dung chung',ke ca dung 'extern'
//3.Bien static ket hop voi ham cung tuong tu nhu ket hop voi bien toan cuc =>ai muon dung thi tu khai bao khong cho dung chung 

//hihi


