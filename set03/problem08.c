#include <stdio.h>
#include <math.h>
typedef struct _triangle
{
	float base, height, area;
} Triangle;
int input_n()
{
  int n;
  printf("Enter the number of triangles:");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and height of the triangle: \n");
	scanf("%f%f",&t.base,&t.height);
	return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    t[i] = input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area=(t->base*t->height)/2;
}
void find_n_areas(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest=t[0];
  for(int i=1;i<n;i++)
    {
      if(t[i].area<smallest.area)
      {
        smallest=t[i];
      }
    }
  return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("The smallest of the triangle with base and height");
  for(int i=0;i<n;i++)
    {
      printf("(%.2f,%.2f),",t[i].base,t[i].height);
    }
  printf("is the triangle with the base %.2f and height %.2f and area % .2f ", smallest.base,smallest.height,smallest.area);
}
int main()
{
  Triangle s;
  int n;
  Triangle t[n];
  n=input_n();
  input_n_triangles(n,t);
  find_n_areas(n,t);
  s=find_smallest_triangle(n,t);
  output(n,t,s);
}