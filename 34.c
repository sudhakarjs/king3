#include <stdio.h>
 
void main()
{
    char a[100];
    int count = 0, b;
 
    printf("enter the string\n");
    scanf("%[^\n]s",&a);
    for (b = 0;a[b] != '\0';b++)
    {
        if (a[b] == ' ')
            count++;    
    }
    printf("%d\n", count + 1);
}

