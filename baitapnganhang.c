#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned int username;
	unsigned int pw;
	int dv,cl,ck;
	int sd=1000;
	int moneyout;
	printf("chao mung ban den hoangluon bank\n");
	printf("so du cua ban la%d \n",sd);
	printf("nhap ten tai khoan");
	scanf("%d",&username);
	printf("\nnhap mat khau");
	scanf("%d", &pw);
	if(pw<1000&&pw>6000)
	{
	 printf("sai mat khau\n");
	}
	else
	{
		printf("1 rut tien\n");
		printf("2 chuyen khoan\n");
		printf("3 xem so du\n");
		printf("4 ket thuc giao dich\n");
		printf("hay chon dich vu\n");
		scanf("%d",&dv);
        switch(dv)
    	{
		case 1:
			printf("nhap so tien muon rut\n");
			scanf("%d",&moneyout);
			cl=sd-moneyout;
			printf("so tien con lai cua ban la%d\n",cl);
			break;
		case 2:
			printf("nhap so tien muon chuyen khoan\n");
			scanf("%d",&ck);
			cl=sd-ck;
			printf("so tien con lai cua ban la%d\n",cl);
			break;
		case 3:
			printf("so du cua ban la%d\n",sd);
			break;
		case 4:
			printf("ket thuc giao dich\n");
		default:
			printf("nhap lai\n");
			break;
		}
		
	}
	printf("cam on ban da thuc hien giao dich cung chung toi");
}	
	
