#include <stdio.h>
#include <math.h>
typedef struct _point
{
  float x;
  float y;
}Point;

Point input1()
{
  Point a;
  printf("Enter the x co-ordinates of the first point ");
  scanf("%f",&a.x);
  printf("Enter the y co-ordinates of the first point ");
  scanf("%f",&a.y);
  return a;
}

Point input2()
{
  Point a;
  printf("Enter the x co-ordinates of the second point ");
  scanf("%f",&a.x);
  printf("Enter the y co-ordinates of the second point ");
  scanf("%f",&a.y);
  return a;
}

float dist(Point e, Point f)
{
  float res1,res2;
  float distance,p,q;
  res1 = f.x-e.x;
  res2 = f.y-e.y;
  p=pow(res1,2);
  q=pow(res2,2);
  distance = sqrt((p+q));
  return distance;
}
void output(Point a, Point b, float distance)
{
  printf("The distance between Point (%.2f,%.2f) and Point (%.2f,%.2f) is %.2f",a.x,a.y,b.x,b.y,distance);
}
int main()
{
  Point e,f;
  float g;
  e= input1();
  f= input2();
  g=dist(e,f);
 output(e,f,g);
}