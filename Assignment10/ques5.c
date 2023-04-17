//Write a function to print first N odd natural numbers.(TSRN)
#include<stdio.h>
void print(int n)
{
    int i;
    for(i=1;i<=n;i=i+2)
    printf("%d\n",i);

}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    print(n);
    return 0;
}