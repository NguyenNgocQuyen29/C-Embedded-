//trong ng�n ngu l�p tr�nh C,chuoi la mot tap hop cac ki tu duoc luu tru tren cac o nho lien tiep va luon luon co 1 ky tu null l� \0 b�o hi�u ket th�c chu�i
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//co 2 c�ch khai b�o chu�i: 1.bi�u thi bang con tro kieu char :  char ten* = "NgocQuyen"; =>tao ra con tro luu dia chi v�ng nho nay
                          //2.bieu thi bang mang ki tu: char ten[] = "NgocQuyen";=>tao ra mang du lieu ,cap phat 10 phan tu"NgocQuyen+null" cua mang 
                                  //vung nho kieu 1 la vung nho hang ,ta kh�ng th� nao thay doi gia tri cua no,mmuon thay doi phai tro no sang vung nho khac
                                  
						 /* int main()
                          {
                          	char ten[] = "NgocQuyen";
                          	char Ten[] = "Quyen";
                            ten[0] = 'A';
                          	ten[1] = 'B';
                          	ten[2] = 'C';
                          	ten[3] = '\0';*/
                          	
                          	/*h�m strlen : t�nh do dai cua 1 chuoi
                          	int dodai = strlen(ten);
                          	printf("�� d�i chuoi la: %d", dodai);*/
                          	
                          	/*h�m strcmp :so s�nh d? l?n 2 chu?i str1 v� str2 (d� lon khong phai do dai)
                          	  c� ph�p: int strcmp(const char *str1,const char * str2);
								
                          	int sosanh = strcmp(ten, Ten);
                          	if (sosanh > 0)
                          	    printf("ten > Ten\n");
                          	else if(sosanh < 0)
                          	    printf("ten < Ten\n");
                          	else 
                          	    printf("S1 = S2");*/
                          	
                          	/*
                          	H�m strcpy :duoc d�ng d? coppy gia tri cua chuoi nguon vao chuoi dich
                          	 c� ph�p: char *strcpy(char * dest, const char*src);
                          	   +dest:d�y la con tro tro toi mang chua chuoi vua duoc sao chep
                          	   +src:Chuoi d� duoc sao ch�p
                          	   ham nay tra ve mot con tro toi chuoi d�ch dest
							strcpy(&ten[4],Ten);
							printf("%s",ten);*/
							
							/*
							H�m strcat :duoc su dung d� n�i chuoi nguon vao duoi cua chu nguon dich
							  c� ph�p: char *strcat(char *dest,const char*src)
							*/
							/*
							H�m strstr: su dung de tim chuoi con trong 1 chuoi me
							  c� ph�p: char *strstr(const char*str,constr char *sub)
							
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
							H�m strtok: chia chuoi dai thanh cac chuoi nho du�c phan biet rieng le boi cac ki tu dac biet
							
							char s1[] = "Nguyen Thi Ngoc Quyen, 20146523";
							char TEN[19];
							char MSSV[9];
							
							char *token = strtok(s1, " ,"); //dau cach voi dau ,
							//strcpy(TEN,token); //luc nay da tach NguyenThiNgocQuyen voi 20146523 ra roi ,d�ng nay de coppy token vao TEN
							while(token != NULL) //neu token tro den 1 vung nho c� gi� tri
							{
								printf("%s\n", token);
								token = strtok(NULL, " ,"); //t�ch ra 
							}*/
							
							/*
							B�i 1:T�m vi tri cua chu 'Q' va tra ve vi tri cua no trong chuoi Nguyen Thi Ngoc Quyen,mo rong: nhap ki tu va in ra vi tri cua no trong chuoi
						
							char kytu[2]; //kytu[0] = ky tu nhap tu ban phim, kytu[1] = NULL
							printf("Nhap ki tu:");
							gets(kytu);
							char s1[] = "Nguyen Thi Ngoc Quyen";
							char *s = strstr(s1, kytu);
							printf("%s la phan tu thu %d",kytu, s-s1);
							*/
							/*
							B�i 2:X�a bo khoang trang trong chuoi: "Nguyen Thi Ngoc Quyen" va in ra chuoi lien
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
                          
						  
