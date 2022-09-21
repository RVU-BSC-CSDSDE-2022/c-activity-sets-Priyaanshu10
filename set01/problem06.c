#include <stdio.h>
void input(int*a,int*b, int*c)
{
  printf("Enter three numbers");
  scanf("%d %d %d",a,b,c);
}
int compare(int a, int b, int c)
{
  if(a>b && a>c){
    return a;
  }
  else if(a<b && b>c){
     return b;
  }
  else{
    return c;
  }
}
int main()
{
  int x,y,z,q;
  input(&x,&y,&z);
  q=compare(x, y, z);
  printf("The largest number among %d, %d and %d is %d ",x,y,z,q);
  return 0;
}