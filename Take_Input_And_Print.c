#include<stdio.h>
int main()
{
    char n1[100],n2[100];
    scanf("%[^
]s",n1);
    int i;
    for(i=0;n1[i]!=NULL;i++)
    {
        n2[i]=n1[i];
    }
    n2[i]=NULL;
    printf("%s",n2);
}