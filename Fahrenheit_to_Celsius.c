#include<stdio.h>
void lax(float n)
{
    float k;
    k=((n-32)*5)/9;
    printf("%.2f",k);
}
int main()
{
    float c;
    scanf("%f",&c);
    lax(c);
}