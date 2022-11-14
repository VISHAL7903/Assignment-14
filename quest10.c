#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter the 10 number");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    return 0;
}