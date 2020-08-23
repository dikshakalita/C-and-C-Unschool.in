#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,per;
	printf("\n Enter marks of 4 subjects:");
	scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
	per=(s1+s2+s3+s4)/4;
	if(per>80)
	printf("\n A Grade");
	else if(per<80 && per>=70)
	printf("\n B Grade");
	else if(per<70 && per>=60)
	printf("\n C Grade");
	else if(per<60 && per>=45)
	printf("\n D Grade");
	else
	printf("\n FAIL");
	
	return 0;
}

