#include <stdio.h>
#include <math.h>

struct camel
{
	float radius, height, length,weight;
};
typedef struct camel Camel;

Camel input()
{ Camel c;
  printf("Enter the radius\n");
  scanf("%f",&c.radius);

  printf("Enter the height\n");
  scanf("%f",&c.height);

  printf("Enter the lenght\n");
  scanf("%f",&c.length);
  return c;
}

void find_weight(Camel *c) 
{
  int a,b,d;
  a= pow(c->radius,3);
  b= c->height*c->length;
  d= sqrt(b);
  c->weight= 3.14*a*d;
}

void output(Camel c)
{ 
  printf("The weight of camel is %f\n",c.weight);
}

int main()
  {
  Camel z;
  z= input();
  find_weight(&z);
  output(z);
  }