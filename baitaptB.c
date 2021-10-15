#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int avg;
 main(int argc, char *argv[])
 {
	int am,lt,th,total;
	char chon;
	printf("nhap lan luot diem asm lythuyet thuchanh\n");
	scanf("%d %d %d",&am,&lt,&th);
	do
	{
	printf("ban co muon tiep tuc tinh diem tb ko ? \n");
	printf("y : co\n");
	printf("n : khong\n");
	fflush(stdin);
	scanf("%c",&chon);
		switch(chon){
			case 'n':
				break;
			case 'y':
					avg = xeploai(am,lt,th);
		
					if(avg<40)
					{
					printf("truot TB\n");
					}
					else if(avg>40&&avg<60)
					{
						printf("do Tb\n");
					}
					else if(avg>60&&avg<80)
					{
						printf("kha Tb\n");
					}
					else
					{
						printf("gioi Tb\n");
					}
				break;
			}
	}while(chon!='y'||chon!='n');
}
	
	int xeploai(int am,int lt,int th)
	{
		int total;
		total=am+lt+th;
		avg=total/3;
		printf("diem trung binh cua hoc sinh do la%d\n",avg);
		return(avg);
		
	}
		
	
	
	

