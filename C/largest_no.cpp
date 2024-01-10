#include<stdio.h>
int main(){
int num1,num2,num3;
printf("Enter three number from user :\n");
scanf("%d %d %d" ,&num1,&num2,&num3);
printf("1 no.=%d,t\2 no.=%d,t\3 no. =%d\n",num1,num2,num3);
if(num1>num2)
{
	if(num1>num3)
	{
		printf("Frist number greater than Another:");
	}
	else
	{
	printf("third number is greater than Another ");
    }
}
  else if(num2>num3)
printf("Second number is greater than Another");

else
	printf("Third number greater than other");

}
