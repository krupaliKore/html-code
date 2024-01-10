//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
	int cprice,sprice,plamt;
	printf("Input  Cost_Price:\n");
	scanf("%d",&cprice);
	
	printf("Input  Selling_Price:\n");
	scanf("%d",&sprice);
	
  if(sprice>cprice)
  {
  	plamt=sprice-cprice;
  	printf("Your profit Amount:%d\n",plamt);
  }
  else if(cprice>sprice)
  {
  	plamt=cprice-sprice;
  	printf("Your lost Amout: %d\n",plamt);
  }
  else
  {
  	printf("Your not Profit Lost Amount:");
  }
}
