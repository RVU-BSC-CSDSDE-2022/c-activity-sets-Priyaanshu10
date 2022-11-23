#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the x co-ordinates of the point 1: ");
  scanf("%f",x1);
  printf("Enter the y co-ordinates of the point 1: ");
  scanf("%f",y1);
  printf("Enter the x co-ordinates of the point 2: ");
  scanf("%f",x2);
  printf("Enter the y co-ordinates of the point 2: ");
  scanf("%f",y2);
  printf("Enter the x co-ordinates of the point 3: ");
  scanf("%f",x3);
  printf("Enter the y co-ordinates of the point 3: ");
  scanf("%f",y3);
  
  
}
float is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  
  float result;
  result= (x1*(y2-y1))+(x2*(y3-y1))+(x3*(y1-y2));
  return result;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, float result)
{
  if(result==0)
  {printf("The given points do not form a triangle");}
  else
  {printf("The given points do form a triangle");}  
}
int main()
{
  float a1,b1,a2,b2,a3,b3;
  float result;
  input_triangle(&a1,&b1,&a2,&b2,&a3,&b3);
  result=is_triangle(a1,b1,a2,b2,a3,b3);
  output(a1,b1,a2,b2,a3,b3,result);
  }