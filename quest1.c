#include<stdio.h>
int main()
{
   int arr[10],i,sum=0;
   printf("enter the 10 number");
   for(i=0;i<=9;i++)
   {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
   }
   printf("Sum is %d",sum);
   return 0;
}