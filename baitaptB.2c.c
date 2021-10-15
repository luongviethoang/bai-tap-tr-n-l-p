#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int avg;
char chon;
 main(int argc, char *argv[])
 {
	do
	{
	int am,lt,th,total,avg;
	printf("nhap lan luot diem asm lythuyet thuchanh\n");
	scanf("%d %d %d",&am,&lt,&th);
	printf("ban co muon tiep tuc tinh diem tb ko ? \n");
	printf("y : co\n");
	printf("n : khong\n");
	fflush(stdin);
	scanf("%c",&chon);
		switch(chon){
			case 'n':
				break;
			case 'y':
				avg= xeploai(am,lt,th);
				switch(avg){
					case 0:
					break;
					case 1:
					break;
					case 2:
					break;
					case 3:
					break;
						
				}
				break;
			}
	}while(chon=='y');
}
	
	int xeploai(int am,int lt,int th)
	{
		int total;
		total=am+lt+th;
		avg=total/3;
		if(avg<40)
		{
		printf("truot TB\n");
		return 1;
		}
		else if(avg>40&&avg<60)
		{
		printf("do Tb\n");
		return 2;
		}
		else if(avg>60&&avg<80)
		{
		printf("kha Tb\n");
		return 3;
		}
		else
		{
		printf("gioi Tb\n");
		return 4;
		}
		
	}
		
	
	
	

