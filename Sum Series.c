#include<stdio.h>
int main()
{
	int i,j;
	float fact=1,sum=0,div;
	for(i=1;i<=7;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact*=j;
		}
		div=i/fact;
		sum+=div;
	}
	printf("the sum is %f ", sum);
	return 0;
}
