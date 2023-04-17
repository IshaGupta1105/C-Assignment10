//Write a function to calculate the number of combinations one can make from n items and r selected at a time.(TSRS)
#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d %d",&n,&r);
    printf("Combination is %d",comb(n,r));
    return 0;
}