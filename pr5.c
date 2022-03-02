#include<stdio.h>
int main()
{
int a[10],i,j,n,temp,min;
printf("enter the number of element\n");
scanf("%d",&n);
printf("enter the array element\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selectFun(a);
return 0;
}
void selectFun(int array[])
{
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
min=j;
temp=a[min];
a[min]=a[j];
a[i]=temp;

}
printf("selection sort is\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}

