#include<stdio.h>
#include<string.h>
void main()
{
    int b,c,count=0;
    printf("Enter the string:");
    char a[1000];
    gets(a);
    b=strlen(a);
    for(c=0;a[c]!='\0';c++)
    {
        if(a[c]=='.')
        count++;
    }
    printf("the no of lines in the string is %d",count);
}

