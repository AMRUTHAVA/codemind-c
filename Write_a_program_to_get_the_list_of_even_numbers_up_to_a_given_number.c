#include<stdio.h>
int main()
{
    int n,i,j,l;
    scanf("%d%d",&n,&l);
    for(i=n;i<=l;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}