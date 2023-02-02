#include<stdio.h>
void area(int r)
{
    float a;
    a=3.14*r*r;
    printf("%.2f",a);
}
int main()
{
    int r;
    scanf("%d",&r);
    area(r);
}