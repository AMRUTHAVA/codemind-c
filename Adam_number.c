#include<stdio.h>
int main()
{
    int n,n1,sq,sql,r,q,s=0,ri,ql,sl=0,rsq;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    n1=s;
    sq=n*n;
    sql=n1*n1;
    ql=sql;
    while(ql!=0)
    {
        ri=ql%10;
        ql=ql/10;
        sl=sl*10+ri;
    }
    rsq=sl;
    if(sq==rsq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}