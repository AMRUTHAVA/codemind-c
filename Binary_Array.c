#include<stdio.h>
int main()
{
    int n,i,c=0;
    int a[i];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]==0 || a[i]==1)
    {
      c++;
    }
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
