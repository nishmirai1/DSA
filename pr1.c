#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10],i,n,key;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the array value\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("search the number\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("array found at loc %d",i);
exit(0);
}
}
printf("array not found");
}



































































