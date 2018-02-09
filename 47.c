#include<stdio.h>
int main()
{
	int s,i=0,rem=0;
	scanf("%d",&s);
	while(s>0)
	{
		s=s/10;
		i++;
	}
	printf("%d",i);
	return 0;
}
