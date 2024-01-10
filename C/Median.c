//Q12 find the median of three value?
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter any three values: \n");
	scanf("%d %d %d",&a,&b,&c);
	
if((a>b &&a<c)||(a<b && a>c)){
	printf( "The median is %d\n",a);
}
else if((b>a && b<c )||(b<a && b>c)){
	printf("The median is %d",b);
	
}
else {
	printf("The median is %d",c);
}
	
	return 0;
}
