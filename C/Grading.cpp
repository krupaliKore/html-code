//Q5 Gradding system
#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks: \n");
	scanf("%d",&marks);
	
	if(marks<25){
		printf("F");
	}
	else if (marks>=25 && marks<45){
	
	printf("E");
	 
	}
	else if(marks>=45 && marks<50)
	{
		printf("D");
		
	}
	else if(marks>=50&&marks<60){
		printf("C");
	}
	else if(marks>=60 && marks<80){
		printf("B");
	}
	else if(marks>=80 && marks<90)
	{
		printf("A");
	} else{
		printf("+A");
	}
	return 0;
}
