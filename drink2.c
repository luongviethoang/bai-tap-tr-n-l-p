#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int num,i,id,total=0;
 printf("Chao mung quy khach/n");
 printf("quy khach co bn nguoi: \n");
 scanf("%d",&num);
 int user[num],menu[3];
 for(i=0;i<5;i++){
 	menu[i]=0;}
 	printf("Menu\n");
  printf("1.caffe 30k/coc \n");
  printf("2.coca 10k/coc \n");
  printf("3.Nuoc duong 5k/coc \n");
 for(i=0;i<num;i++){
 	printf("Quy khach thu %d muon uong gi? \n",i+1);
 	scanf("%d",&id);
 	switch(id){
 		case 1: 
 			printf("Mon cua khach chon la caffe gia 30k\n");
 			menu[0]++;
 			user[i]=id;
 			total+=30000;
 			break;
 		case 2: 
 			printf("Mon cua khach chon la coca gia 10k\n");
 			user[i]=id;
 			menu[1]++;
 			total+=10000;
 			break;
 		case 3: 
 			printf("Mon cua khach chon la Nuoc duong gia 5k\n");
 			user[i]=id;
 			menu[2]++;
 			total+=5000;
 			break;
 		default:
 			printf("vui long chon lai\n");
 			break;}
	  }
    printf("Hoa don cua cac quy khach la \n");
 for(i=0;i<num;i++){
 	printf("Quy khach thu %d dung %d \n",i+1,user[i]);
  } 
   
  printf("1.caffe %d coc \n",menu[0]);
  printf("2.coca %d coc \n",menu[1]);
  printf("3.Nuoc duong %d coc \n",menu[2]);
  printf("Tong %d \n",total);
  printf("Thue 10 %% la %f\n",total*0.1);
  printf("Tien phai thanh toan %.0f",total*1.1);
}
