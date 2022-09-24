#include<stdio.h>

void add(int, int, int*);
void add(int a, int b ,int *c)
{
  *c=a+b;
}
int main()
{
  int x,y,z;
  printf("Enter two numbers you want to add ");
  scanf("%d %d",&x,&y);
  add(x,y,&z);
  printf("The sum of %d and %d is %d",x,y,z);
  return 0;
}