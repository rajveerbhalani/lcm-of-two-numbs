#include<stdio.h>
 int lcm( int a , int b);
int main()
{
int num1 , num2 ,LCM;
	printf(" ENTER TWO NUMBERS WHOSE LCM NEEDS TO BE TAKEN :-");
	scanf("%d%d",&num1,&num2);
if ( num1>num2)
{ 
LCM =lcm( num2 , num1);
}
else
{LCM= lcm(num1 ,num2);
}
printf("the lcm of %d and %d is %d",num1,num2,lcm);
return 0;
}

 int lcm( int a , int b)
 {int m=0;
 if((m%a==0)&&(m%b==0))
 { return m;
 }
 else 
 { return lcm(a,b);
 }
 }
