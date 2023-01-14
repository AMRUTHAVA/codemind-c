#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w==x or w==y or w==z)
    {
        printf("YES");
    }
    else if (w==x+y or w==x+z or w==y+z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}