//Write a C program to determine eligibility for admission to a professional course based on the following criteria:
//Marks in Maths >=65
//Marks in Phy >=55
//Marks in Chem>=50
//Total in all three subject >=190
//or
//Total in Math and Physics >=140
#include<stdio.h>
int main(){
	int p,c,m,mp,tol;
	printf("Elegibility creteria.\n\n");
	printf("-----------------------------------\n");
	
	printf("Marks in math >= 65 \n");
	printf("Marks in Phy >= 55\n");
	printf("Marks in Chem >= 50\n");
	printf("Total in all three subject >= 190\n");
	printf("Total in math and physics >= 140\n");
	printf("-----------------------------------\n");
	
	printf("Input the marks obtained in physics.\n");
	scanf("%d",&p); //Read and stor marks in p 
	printf("Input the marks obtained in chemistry.\n");
	scanf("%d",&c); //Read and stor marks in c 
	printf("Input the marks obtained in math.\n");
	scanf("%d",&m); //Read and stor marks in m
	
	printf("Total marks of Math,Physics,Chemistry : %d\n",p+c+m);
	printf("Total marks of Math  and Physics :%d \n",m+p);
	if(p>=65)
    	if(c>=55)
        	if(m>=50)
            	if((p+c+m)>=190||(m+p)>=140)
                	printf("The Candidate  eligible for admission.\n");
            	else 
                	printf("The Candidate is not eligible for admission.\n");
	    	else 
              	printf("The Candidate is not eligible for admission.\n");
		else 
           	printf("The Candidate is not eligible for admission.\n");
	else 
    printf("The Candidate is not eligible for admission.\n");
	
}
