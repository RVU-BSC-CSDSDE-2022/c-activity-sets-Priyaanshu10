#include <stdio.h>
int input()
{
  int a;
  printf("Enter any numbers ");
  scanf("%d",&a);
  return a;
}
int largest(int a, int b, int c)
{
  if(a>b && a>c)
    return a;
  else if(b>a && b>c)
    return b;
  else
    return c;
}
void output(int a, int b, int c, int d)
{
  printf("The largest number is %d",d);
  return d;
}
int main()
{
  int q,w,e,r;
  q=input();
  w=input();
  e=input();
  r=largest(q,w,e);
  output(q,w,e,r);
  return 0;
}