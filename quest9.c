#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse order \n");
    for (int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}