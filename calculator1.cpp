/* Write a calculator program */ 
#include<stdio.h>
int main()
{
	float a,b,sum,sub,mult,div,per;
	printf("\n Enter two values:");
	scanf("%f%f",&a,&b);
	sum=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	per=(a/b)*100;
	printf("\n Sum of %f+%f=%f",a,b,sum);
	printf("\n Subtraction of %f-%f=%f",a,a,sub);
	printf("\n Multiplicaion of %f*%f=%f",a,b,mult);
	printf("\n Division of %f/%f=%f",a,b,div);
	printf("\n Percentage of %f and %f is %f",a,b,per);
	return 0;
	
}
