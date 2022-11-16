#include <stdio.h>

void input(float *base, float *height)
{
  printf("Enter the base and height of the triangle");
  scanf("%f %f",base,height);
}

void find_area(float base , float height, float *area)
{
  *area = (base*height)/2;
}

void output(float base, float height, float area)
{
  printf("The area of the triangle with base %f and height %f is %f,\n",base,height,area);
}

float main()
{
  float b,h,a=0;
  input(&b, &h);
  find_area(b,h,&a);
  output(b,h,a);
  return 0;
}