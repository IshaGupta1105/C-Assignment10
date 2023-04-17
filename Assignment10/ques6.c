//Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factorial of %d is %d.\n\n",n,fact(n));
    return 0;
}