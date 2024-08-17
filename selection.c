#include<stdio.h>
void main()
{
int i=0,n,j,a[50],small,temp;
printf("enter the size of the array :\n");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
small=i;
for (j=i+1;j<n;j++)
{
if(a[small]>a[j])
{
small=j;
}
}
if(small!=i)
{
temp=a[i];
a[i]=a[small];
a[small]=temp;
}
}
printf("enter the sorted elements is:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
