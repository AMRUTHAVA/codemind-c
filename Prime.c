#include<stdio.h>
int main()
{
    int a,n,r,con=0;
    scanf("%d",&n);
    for(a=2;a<n;a++)
    {
        r=n%a;
        if(r==0)
        {
            con++;
        }
    }
    if(con==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}