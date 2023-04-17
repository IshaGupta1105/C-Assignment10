//Write a function to calculate simple interest.(TSRS)
#include<stdio.h>
float simpleInterest(float P,float R,float T)
{
    return (P*R*T)/100;
}
int main()
{
    int p,r,t;
    float SI;
    printf("Enter the value of p,r and t:\n");
    scanf("%d %d %d",&p,&r,&t);
    SI=simpleInterest(p,r,t);
    printf("SI= %f\n\n",SI);
    return 0;
}