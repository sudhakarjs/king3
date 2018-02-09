#include <stdio.h>

int main(void) 
{
	int c,b,array[50],sum=0,avg;
	printf("enter the size of the array");
	scanf("%d",&b);
	printf("enter the array elements");
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	
	}
	for(c=0;c<n;c++)
	{
		sum=sum+array[c];
	}
	avg=sum/n;
	printf("\n%d",sum);
	printf("\n%d",avg);
	return 0;
}

