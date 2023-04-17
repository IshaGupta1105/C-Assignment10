//Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
int check(int digit,int num)
{
    while(num)
    {
        if(num%10==digit)
        return 1;
        num=num/10;
    }
    return 0;
}
int main()
{
    int digit,num;
    printf("Enter the digit and number:");
    scanf("%d %d",&digit,&num);
    if(check(digit,num))
    {
        printf("Yes\n\n");
    }
    else
    {
        printf("NO\n\n");
    }
    return 0;
}