// Write a C program to check whether an alphabet is a vowel or a consonant.
//Test Data :
//k
#include<stdio.h>
int main(){
	char alpha;
	
	printf("Input vowel or consonant:\n");
	scanf("%c",&alpha);
	if(alpha=='a'|| alpha=='e'|| alpha=='i' ||alpha=='o' ||alpha=='u')
	{
		printf("The alphabet of vowel.\n");
	}
	else if ((alpha>='a'&&alpha<='z') || (alpha>='A'&& alpha<='Z'))
	{
		printf("The alphabet of consonent.\n");
	}
	else
	{
		printf("There is no alphabets.");
	}
}
