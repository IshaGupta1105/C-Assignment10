//Write a function to calculate the area of circle (TSRS).
#include<stdio.h>
float area(float radius);
int main()
{
    int r;
    // float a;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    // a=area(r);
    printf("Area of circle is %f",area(r));
    return 0;
}
float area(float radius)
{
    return 3.14*radius*radius;
}