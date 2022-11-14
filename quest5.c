#include<stdio.h>
int main()
{
    int a[10],i,smallest;
    printf("Enter the 10 number");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=1;i<9;i++)
    {
        if(smallest>a[i])
        smallest=a[i];
    }
    printf("Smallest number =%d",smallest);
    return 0;
        
}
