//Q3 Print greatest values
#include<stdio.h>
int main(){
	 int a,b;
	 printf ("Enter any two number \n");
	 scanf("%d %d",&a ,&b);

if (a==b){
	printf("both are equals:");
}else if(a>b){
	printf("greatest number %d",a);
}	else{
	printf("greatest number %d",b);
}

	 return 0;
} 
