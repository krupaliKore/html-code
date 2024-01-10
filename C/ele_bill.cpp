//Q9 electricity bills...
#include<stdio.h>
int main(){
	int unit,unit1;  
	printf("Enter your total unit \n");//Enter input value;
	scanf("%s",&unit);
	
	if(unit<=100)
	{
		printf("There is no charge");
	}
	else if(unit>100 && unit<=200)
	{ 
	unit=unit-100;
	unit=unit*5;
	printf("Total charge is %d\n",unit);
	}
	else if(unit>=200)
	{unit=unit-200;
	unit=unit*10;
	unit=unit+500;
	printf("Total charge is %d\n",unit);
	}
	else{
		unit=unit-200;
		unit1=unit*5;
		unit=unit*20;
		unit=unit+unit1;
		printf("Total charge is %d \n",unit);
	}
	return 0;
	
}
