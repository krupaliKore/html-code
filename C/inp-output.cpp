#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter Input hey :");
	scanf("%d",&str);
	
	if(str == "hey"){
		printf(" bye ");
		
	}else if(str=="bye"){
		printf(" hey");
	}
	else{
		printf("Enter valid input");
	}
	
	return 0;
}
