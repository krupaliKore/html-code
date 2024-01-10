//Q7 print absolute number input1,output-1
//input-1,output1;
#include<stdio.h>
#include <stdlib.h> 
int main()
{
	
	int x ,y;
	printf("Enter any Positive or negative number :\n");
	scanf("%d",&x);
	y=abs(x);
	
  printf("The absolute value of %d is %d", x, y);
	return 0;
}
