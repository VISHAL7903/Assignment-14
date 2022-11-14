#include<stdio.h>
int main()
{
    int a[10],i,greatest;
    printf("Enter the 10 number");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    greatest=a[0];
    for(i=1;i<9;i++)
    {
        if(greatest<a[i])
        greatest=a[i];
    }
    printf("Greatest number =%d",greatest);
    return 0;
        
}
