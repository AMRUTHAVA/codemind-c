#include<stdio.h>
int main()
{
    int n,i,sum=0,avg,c,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
     avg=sum/n;
    for(i=0;i<=n;i++)
    {
        if(avg==a[i])
        {
    f=1;
    break;}
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
    printf("False");
    }
}