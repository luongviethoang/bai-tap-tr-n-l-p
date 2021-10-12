#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int army[8];
	int i,total,high;
	for(i=0;i<8;i++){
		printf("\n enter value: %d : ",i+1);
		scanf("%d",&army[i]);
	}
	high=army[0];
	for(i=1;i<8;i++){
		if(army[1]>high)
		high=army[i];}
	printf("\n highest value entered was\n\n %d",high);
	for(i=0,total=0;i<8;i++)
		total=total + army[i];
		printf("the average of the elements od ary is %d",total/i);
	

	return 0;
}
