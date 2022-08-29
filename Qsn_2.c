//WAP to print first N natural number.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}