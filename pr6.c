#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[20],i,n,key,mid,low=0,high;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the array value\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("elements are\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter the search element\n");
scanf("%d",&key);
high=n-1;
while(low<=high)
{
mid=low+high/2;
if(key==a[mid])
{
printf("array found at loc %d",i);
exit(0);
}

else if(key>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
printf("search element is not found");
}
