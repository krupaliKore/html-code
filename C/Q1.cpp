//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter num1 and num2 :");
	scanf("%d %d" ,&num1,&num2);
	
	if(num1==num2){
		printf(" Num1 and Num2 is equal:");
		
	}else{
			printf(" Num1 and Num2 is  not equal:");
	}
	return 0;
}
