#include <stdio.h>
#include <string.h>

//vong lap while su dung de lap di lap lai khoi lenh khong biet truoc so lan lap
//kiem tra dieu kien trong vong lap,neu dk sai thi thoat khoi vong lap

//in ra cac so le tu 0-20
/*int main()
{
	int i = 0;
	while(i <= 20) //vi du while(1) luon luon thuc hien vong lap vo han
	{
		if(i%2!= 0)
		{
		     printf("%d \n", i);	
		}
		i++;
	}
}*/
//============================
//Bài 1: Tính tông N = 1+2+3+...+N
/*int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	
	int i = 1;
	int TONG;
	while(i<=n)
	{
		TONG = TONG + i;
		i ++;	
	}
	printf("TONG = %d", TONG);
}*/
//============================
//Tu khoa CONTINUE
//nêu vong lap dang chay ma gap lenh continue tat ca lenh nam duoi continue se bi bo qua o lan lap hien tai
   //Vong lap se chuyen sang kiem tra dieu kien ca tieo tuc lap o lan tiep theo
//Bai 2: Int cac so tu 1 den 10 tru so 5
/*int main()
{
	int i;
	for(i=1; i<11 ; i++)
	{
		if(i == 5)   //neu in so chan tu 1-10
		             //if(i % 2 != 0)
		{
			continue;
		}
		printf("%d\n",i);
	}
}
//continue voi while
int main()
{
   int i = 0;
   while(i<11)
   {
      if(i%2 !=0)
      {
         continue;
	  }
	  printf("%d\n", i);
   }
}
*/
//============================
//Tu khoa BREAK
//mot vong lap neu gap tu break thi no lap tuc thoat ra khoi vong lap
//vong lap for hoac while 

//============================
//Bai 3: In ra cac so nguyen to tu 1->N
#include <stdbool.h>
int main()
{
	int i,n;
	printf("Nhap n:");
	scanf("%d", &n);
	
	for(i=1 ; i < n+1; i++)
	{
		//check i co phai so nguyen to hay khong
		if(i>2)
		{
			int j;
			bool laSNT = true;
			for(j=2; j<i; j++)
			{
				if(i%j == 0){
				    laSNT = false;
				    break;}
			}
			if(laSNT == true){
			printf("%d\n",i);}
		}
	}
}

