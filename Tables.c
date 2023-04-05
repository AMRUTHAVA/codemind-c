#include <stdio.h>
int main()
{
  int n,a,i;
  scanf("%d",&n);
  for (i = 1; i <=9;i++) 
  {
      if(i%2==1)
    printf("%d x %d = %d
",n,i,n*i);
  }
}