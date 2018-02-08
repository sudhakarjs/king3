#include<stdio.h>
int main()
{
int s=32;
int k=42;
printf("value of s=%d k=%d before swapping",s,k);
s=s^k;
k=s^k;
s=s^k;
printf("value of s=%d k=%d after swapping",s,k);
return(0);
}
