#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,i,s=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=s+sqrt(i);
    }
    printf("%.2f",s);
}