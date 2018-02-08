#include<stdio.h>
int main()
{
int c,b,temp;
printf("enter the numbers");
scanf("%d %d",&c,&b);
temp=c;
c=b;
b=temp;
printf("after swapping %d %d",c,b);
return 0;
}
