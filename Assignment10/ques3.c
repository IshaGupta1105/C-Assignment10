//Write a function to check whether a given number is even or odd.Return 1 if the number is even,otherwise return 0.(TSRS)
#include<stdio.h>
int evenOrodd(int x)
{
    return (x%2==0);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(evenOrodd(n)==1)
    {
        printf("Even\n\n");
    }
    else
    {
        printf("Odd\n\n");
    }
    return 0;
}