#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int c=0,a;
printf("\n Enter your string:");
gets(str);
for(a=0;str[a]!=0;a++)
{
if(str[a]==' ')
{
c++;
}
}
printf("\n The number of spaces are%d:",c);
return 0;
}
