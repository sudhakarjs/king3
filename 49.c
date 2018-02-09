
#include <stdio.h>

int main(void) {
           long int a[100],c,a,max=0,min=0;
           scanf("%ld",&c);
           for(a=0;a<c;a++)
           scanf("%ld",&a[a]);
           max=a[0];
           for(a=0;a<c;a++)
           {
           	if(a[a]>max)
           	max=a[a];
           }
          min=a[0];
           for(a=0;a<c;a++)
           {
           	if(a[a]<min)
           	min=a[a];
           }
           printf("%ld %ld",min,max);
	return 0;
}

