#include <stdio.h>
int main(){
  int l, b;
  printf("Enter the length ");
  scanf("%d",&l);
    printf("Enter the breath ");
  scanf("%d",&b);
  printf("The are of the rectangle is %d\n",l*b);
  if(l=b)
    printf("It's a square\n");
  else
    printf("It's a rectangle\n");
  return 0;
}