//Q 6.Take input of age 3 people by user and determine oldest and youngest among them.
# include<stdio.h>
int main(){
	int a,b,c;
	printf ("Enter the age of a , b , c \n :");
	scanf("%d %d %d",&a,&b,&c);
	 if((a>b) && (a>c))
	 {
	 	printf(" A is Youngest \n :");
	  } 	
	  else{
	  	printf(" A is Oldest \n :");
	  }
	  if((b>a) && (b>a))
	  {
	  	printf(" B is Youngest \n :");
	  }
	  else{
	  	printf(" B is Oldest \n :");
	  }
	  if((c>a) &&(c>a)){
	  	printf(" C is Youngest \n :");
	  }
	  else{
	  	printf(" C is Oldest \n :");
	  }
	  return 0;
	  
	
}
