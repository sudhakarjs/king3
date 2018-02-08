#include<stdio.h>
int main()
{
int a, s1, s2, z;
printf(" enter number of elements: ");
scanf("%d", &a);
z=n;
if(a>0)
{
printf("\n Enter the First element : ");
scanf("%d", &s1);
a--;
if(a>0)
{
for(;a>=1;a--)
{
printf("\n Enter the next element : ");
scanf("%d", &s2);
if(s1<s2)
s1=s2;
}
}
}
printf("\n The Largest of %d elements is %d", z, s1);
return(0);
}
