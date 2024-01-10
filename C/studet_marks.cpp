//Q Write a C program to read the roll no, name and marks of three subjects and calculate
// the total, percentage and division.

#include<stdio.h>
#include<string.h>
int main ()
{
	int rl,phy,che,ca,total;
	float per;
	char nm[14],div[10];
	 
	 printf("Input the Rollnumber of student :");
	 scanf("%d",&rl);
	 
	 printf("Input the Name of student :");
	 scanf("%d",&nm);
	 
	 printf("Input the Mark Physics,chemistry,science :");
	 scanf("%d %d %d",&phy,&che,&ca);
	 
	total=phy+che+ca;
	per=total/0.3;
	
	if (per >= 60)   // Check if percentage is greater than or equal to 60.
        strcpy(div, "First");   // Assign division as "First" if condition is true.
    else if (per < 60 && per >= 48)   // Check if percentage is between 48 and 60.
        strcpy(div, "Second");   // Assign division as "Second" if condition is true.
    else if (per < 48 && per >= 36)   // Check if percentage is between 36 and 48.
        strcpy(div, "Pass");   // Assign division as "Pass" if condition is true.
    else   // If none of the above conditions are met.
        strcpy(div, "Fail");   // Assign division as "Fail".

 printf("\nRoll No : %d\nName of Student : %s\n", rl, nm);   // Print roll number and name.
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n", phy, che, ca);   // Print marks in each subject.
    printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, per, div);   // Print total marks, percentage, and division.
	return 0;
}

	
