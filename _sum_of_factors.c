#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            x=sum-n;
        }
    }
    printf("%d",x);
}