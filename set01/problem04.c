#include <stdio.h>
void input(int*a,int*b)
{
  printf("eneter two numbers\n");
  scanf("%d%d",a,b);
}
void sum(int a, int b, int *c)
{
  *c=a+b;
}
int main()
{
  int x,y,z;
  input(&x,&y);
  sum(x,y,&z);
  printf("%d+%d is %d\n",x,y,z);
  return 0;
}