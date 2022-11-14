#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter the 10 number");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            se=se+a[i];
        }
        else 
        {
           so=so+a[i];
        }
    }
    printf("Sum of all even number %d\n",se);
    printf("Sum of all odd number %d",so);
    return 0;
    
}