#include <stdio.h>
int main(){
  int l,a,b,r;
  float p,pi=3.14;
  printf("Enter the length ");
  scanf("%d",&l);
  printf("Enter the breath ");
  scanf("%d",&b);

  a=l*b;
   printf("The area of the figure is %d\n",a);
    if(l==b)
    printf("It's a square\n");
  else
    printf("It's a rectangle\n");
    
  printf("Enter the radius of circle ");
  scanf("%d",&r);
    p= pi*r*r;
  printf("Area of circle=%.2f\n",p);
  return 0;
}