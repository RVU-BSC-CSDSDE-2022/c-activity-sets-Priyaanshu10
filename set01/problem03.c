#include <stdio.h>
int input()
{
  int a;
  printf("Enter any number\n");
  scanf("%d",&a);
  return a;
}
int find_sum(int a, int b, int d)
{
  int sum;
  sum=a+b+d;
  return sum;
}
void output(int a, int b, int d, int c)
{
  printf("Sum of %d,%d and %d is %d",a,b,d,c);
}
int main()
{
  int x,y,q,z;
  x=input();
  y=input();
  q=input();
  z= find_sum(x,y,q);
  output(x,y,q,z);
  return 0;
}