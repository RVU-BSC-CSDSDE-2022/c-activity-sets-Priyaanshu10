#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  
  printf("Enter the x co-ordinates of the point 1: ");
  scanf("%f",x1);
  printf("Enter the y co-ordinates of the point 1: ");
  scanf("%f",y1);
  printf("Enter the x co-ordinates of the point 2: ");
  scanf("%f",x2);
  printf("Enter the y co-ordinates of the point 2: ");
  scanf("%f",y2);
  
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float distance,p,q,r,x,y;
  x=x2-x1;
   y=y2-y1;
  p=pow(x,2);
  q=pow(y,2);
  r=p+q;
  distance = sqrt(r);
  
  return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between Point %f,%f and Point %f ,%f is %f",x1,y1,x2,y2,distance);
}
int main()
{
 float a,b,c,d;
  float g;
  input(&a,&b,&c,&d);
  
  g= find_distance(a,b,c,d);
 output(a,b,c,d,g);
}