#include<stdio.h>
int main()
{
int n,a[10],i,min;
printf("\nEnter the value of n:");
scanf("%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("\nThe smallest number is:%d",min);
return 0;
}
