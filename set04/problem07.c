#include<stdio.h>
#include<math.h>
typedef struct point
{
    float x, y;
} Point;

typedef struct line 
{
    Point p1, p2;
    float distance;
} Line;

Point input_point()
{ Point p;
  printf("Enter the x cordinate:\n");
  scanf("%f",&p.x);

  printf("Enter the y cordinate:\n");
  scanf("%f",&p.y);
  return p;
}
Line input_line()
{ Line l;
  Point p1,p2;
  l.p1= input_point();
  l.p2= input_point();
  return l;
}
void find_length(Line *l)
{
  l->distance= sqrt(pow((l->p2.x-l->p1.x),2)+pow((l->p2.y-l->p1.y),2));
}
void output(Line l)
{
  printf("The length of the line is  : %f  ",l.distance);
}
int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
}