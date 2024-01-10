//Write a C program to check whether a character is an alphabet, digit or special character.
//Test Data :
//@
#include<stdio.h>
int main(){
	char sing_ch;
	printf("Input single charecter:\n");
	scanf("%c",& sing_ch);
	 
	if((sing_ch>='a' && sing_ch<='z') || (sing_ch>='A' && sing_ch<='B'))
	
		printf("This is a alphabet.\n");
	
	else if(sing_ch>='0' && sing_ch<='10')
	
	printf("This a digit");
	
	else
	
	printf("This is special charecter:");
	
}
