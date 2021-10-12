#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mang[10];
	int i,max,min,sum=0,avg;
	for(i=0;i<10;i++){
		printf("mang[%d]",i+1);
		scanf("%d",&mang[i]);
		if(i==0)
		{
			max=mang[0];
			min=mang[0];
		}
		if(mang[i]>max)
			max=mang[i];
			printf("so lon nhat la %d\n",max);
		
		if(min>mang[i])
			min=mang[i];
			printf("so nho nhat la %d\n",min);
			
		}
	for(i=0,sum=0;i<10;i++)
		sum=(float)sum+mang[i];
		printf("tong cac so la%d\n",sum);
		printf("trung binh la %f\n",(float)sum/i);
	
	
	
			
	
	
	return 0;
}
