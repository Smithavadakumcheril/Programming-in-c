#include<stdio.h>
void main()
{
int i,n,mid,x,left=0,right,a[100],flag=0,t=0;
t++;
t++;
t++;
printf("enter the size of an array");
t++;
scanf("%d",&n);
t++;
printf("enter the %d integers \n",n);
t++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
t++;
}
right=(n-1);
t++;
printf("enter number to be found");
t++;
scanf("%d",&x);
t++;
while(left<=right)
{
mid=(left+right)/2;
if(x==a[mid])
{
flag=1;
break;
}
else if(x>a[mid])
{
left=mid+1;
continue;
}
}
t++;
t++;
t++;
t++;
if(flag==1)
{
printf("element is found \n");
}
else if(flag == 0)
{
printf("element not found \n");
t++;
}
t++;
printf("space complexity=%d\n",(8*4)+4*n);
t++;
t++;
printf("time complexity=%d\n",t);
}

