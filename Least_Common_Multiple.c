#include<stdio.h>
int main()
{
    int a,c,i,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        c=a*i;
        if(c%b==0)
        {
            printf("%d",c);
            break;
        }
    }
}