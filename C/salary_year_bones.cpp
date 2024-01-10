//Q1 print  Salary ,year of servise ,net bonus amout
# include<stdio.h>
int main(){
	int salary ,year, bonus;
	printf("Enter Salary:");
	    scanf("%d",&salary);
	printf("Enter year:",year);
		scanf("%d",&year);
			if(year>5)
		{
			bonus=salary*5/100;
			printf("your bonus amount is %d",bonus);
		}else{
			printf(" no any amount %d",bonus);
		}
		
	 return 0;
	 
}
