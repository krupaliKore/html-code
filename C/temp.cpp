//Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

#include<stdio.h>
int main()
{
	int tmp;
	
	printf("Input temperature from user:\n");//user input.
	scanf("%d",&tmp); //read and store temperature.
	
	if(tmp<0)
		printf("Freezing weather.\n");
		
	else if(tmp<10)
	printf("Very cold weather.\n");
	
	else if(tmp<20)
	printf("Cold Weather.\n");
	
	else if(tmp<30)
	printf("Normal in temp.\n");
	
	else if(tmp<40)
	printf("Its hot.\n");
	
	else
	printf("Its very hot.");
	
	return 0;
	
}
