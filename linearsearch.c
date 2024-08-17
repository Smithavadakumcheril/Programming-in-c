#include <stdio.h>
void main()
{
int n,i,x,count=0,a[100],time
time++;
printf("enter the elements of the array");
time++;
scanf("%d",&n);
time++;
printf("enter the elements");
time++;
for(i=0;i<n; i++)
{ 
time++;
       scanf ("%d",&a[i]);
       time++;
       }
       printf("enter the search element : ");
       time++;
       scanf("%d",&x);
       time++;
       for (i=0;i<n;i++)
       
       
       { 
       time++;
           if(a[i]==x)
           
           {
           count++;
           }
      }  
           if (count>0)
           {
           time++;
               printf("item is= %d time",count);
               time++;
               
               } 
              else 
             {
              
               printf("element is not found");
               time++;
                } 
                printf("space complexity=%d",16+(4*n));
                time++;
                printf("time complexity=%d",time);
                time++;
                }
