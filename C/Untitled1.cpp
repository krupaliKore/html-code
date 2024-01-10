#include<stdio.h>
int main(){
	int eng,math,sci,comp,mart,per,total;
	printf("Enter eng marks : ");
	scanf("%d",&eng);
	printf("Enter math marks :");
	scanf("%d",&math);
	printf("Enter sci marks :");
	scanf("%d",&sci );
	printf("Enter comp marks :");
	scanf("%d",&comp);
	printf("Enter mart marks :");
	scanf("%d",&mart);
	per=eng+math+sci+comp+mart;
	printf("Total percentage :",per);
	scanf("%d" ,&per);

	total=per*100/500;
	
	
}
