#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    float da,h,ga;
    if(b<=10000)
    {
        da=0.8*b;
        h=0.2*b;
    }
    else if(b<=20000)
    {
        da=0.9*b;
        h=0.25*b;
    }
    else if(b>2000)
    {
        da=0.95*b;
        h=0.3*b;
    }
    ga=b+da+h;
    printf("%0.2f",ga);
}
    
