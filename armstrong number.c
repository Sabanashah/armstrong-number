#include<stdio.h>
void main()
{
	int n,rem,sum=0,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem*rem);
		n=n/10;
	}
	if(temp==sum)
	printf("it is armstrong number");
	else
	printf("it is not a armstrong number");
}
