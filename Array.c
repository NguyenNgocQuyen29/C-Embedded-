//trong ngôn ngu lâp trình C,chuoi la mot tap hop cac ki tu duoc luu tru tren cac o nho lien tiep va luon luon co 1 ky tu null là \0 báo hiêu ket thúc chuôi
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//co 2 cách khai báo chuôi: 1.biêu thi bang con tro kieu char :  char ten* = "NgocQuyen"; =>tao ra con tro luu dia chi vùng nho nay
                          //2.bieu thi bang mang ki tu: char ten[] = "NgocQuyen";=>tao ra mang du lieu ,cap phat 10 phan tu"NgocQuyen+null" cua mang 
                                  //vung nho kieu 1 la vung nho hang ,ta không thê nao thay doi gia tri cua no,mmuon thay doi phai tro no sang vung nho khac
                                  
						 /* int main()
                          {
                          	char ten[] = "NgocQuyen";
                          	char Ten[] = "Quyen";
                            ten[0] = 'A';
                          	ten[1] = 'B';
                          	ten[2] = 'C';
                          	ten[3] = '\0';*/
                          	
                          	/*hàm strlen : tính do dai cua 1 chuoi
                          	int dodai = strlen(ten);
                          	printf("Ðô dài chuoi la: %d", dodai);*/
                          	
                          	/*hàm strcmp :so sánh d? l?n 2 chu?i str1 và str2 (dô lon khong phai do dai)
                          	  cú pháp: int strcmp(const char *str1,const char * str2);
								
                          	int sosanh = strcmp(ten, Ten);
                          	if (sosanh > 0)
                          	    printf("ten > Ten\n");
                          	else if(sosanh < 0)
                          	    printf("ten < Ten\n");
                          	else 
                          	    printf("S1 = S2");*/
                          	
                          	/*
                          	Hàm strcpy :duoc dùng d? coppy gia tri cua chuoi nguon vao chuoi dich
                          	 cú pháp: char *strcpy(char * dest, const char*src);
                          	   +dest:dây la con tro tro toi mang chua chuoi vua duoc sao chep
                          	   +src:Chuoi dê duoc sao chép
                          	   ham nay tra ve mot con tro toi chuoi dích dest
							strcpy(&ten[4],Ten);
							printf("%s",ten);*/
							
							/*
							Hàm strcat :duoc su dung dê nôi chuoi nguon vao duoi cua chu nguon dich
							  cú pháp: char *strcat(char *dest,const char*src)
							*/
							/*
							Hàm strstr: su dung de tim chuoi con trong 1 chuoi me
							  cú pháp: char *strstr(const char*str,constr char *sub)
							
							char s1[] = "NguyenThiNgocQuyen 20146523";
							char s2[] = "20146523";
							char *str = strstr(s1,s2);
							
							printf("S1 = %d\n", s1);
							printf("S2 = %d\n", str); //in dia chi cua s2 trong s1
							//
							if (str)
							{
								printf("Da tim thay %s tai dia chi %d", s2, str); //str la d?ia chi cua s2
							}
							else
							{
								printf("Khong tim thay");
							}
							ung dung la coi xem chuoi con co tung xuat hien trong chuoi me hay khong, tim s2 trong s1 va tra ve dia chi*/
							
							/*
							Hàm strtok: chia chuoi dai thanh cac chuoi nho duôc phan biet rieng le boi cac ki tu dac biet
							
							char s1[] = "Nguyen Thi Ngoc Quyen, 20146523";
							char TEN[19];
							char MSSV[9];
							
							char *token = strtok(s1, " ,"); //dau cach voi dau ,
							//strcpy(TEN,token); //luc nay da tach NguyenThiNgocQuyen voi 20146523 ra roi ,dòng nay de coppy token vao TEN
							while(token != NULL) //neu token tro den 1 vung nho có giá tri
							{
								printf("%s\n", token);
								token = strtok(NULL, " ,"); //tách ra 
							}*/
							
							/*
							Bài 1:Tìm vi tri cua chu 'Q' va tra ve vi tri cua no trong chuoi Nguyen Thi Ngoc Quyen,mo rong: nhap ki tu va in ra vi tri cua no trong chuoi
						
							char kytu[2]; //kytu[0] = ky tu nhap tu ban phim, kytu[1] = NULL
							printf("Nhap ki tu:");
							gets(kytu);
							char s1[] = "Nguyen Thi Ngoc Quyen";
							char *s = strstr(s1, kytu);
							printf("%s la phan tu thu %d",kytu, s-s1);
							*/
							/*
							Bài 2:Xóa bo khoang trang trong chuoi: "Nguyen Thi Ngoc Quyen" va in ra chuoi lien
							*/
	                        void xoaphantumang(char s1[], int index)
                            {
                            	int i;
                                for(i = index; i <strlen(s1); i++)
								{
								    s1[i] = s1[i+1];	
									}	
							}							
							int main()
							{
								char s1[] = "Nguyen Thi Ngoc Quyen";
								char *str = strstr(s1," ");
								while(str != NULL)
								{
								int index = str-s1;
								xoaphantumang(s1,index);
								printf("%s\n",s1);
								str = strstr(s1, " ");
							}
							return 0;
							}
                          
						  
