#include <stdio.h>

// void output(Point a, Point b, float res);

typedef struct _point {
  float x;
  float y;
}cor;

cor input()
{
    cor a;
    scanf("%f %f",&a.x,&a.y);
    return a;
}

void dist(cor a, cor b, float *dis)
{
    float r,t,d;
    r=b.x-a.x;
    t=b.y-a.y;
    r=r*r;
    t=t*t;
    d=r+t;
    float q,z;
    q=d/2;
    while(q!=z)
    {z=q;
    q=(d/q+q)/2;
    }
    *dis=q;
}

void output(cor a, cor b, float dis)
{
    printf("Distance between %.1f,%.1f and %.1f,%.1f is %.1f",a.x,a.y,b.x,b.y,dis);
}

int main()
{
    cor a,b;
    float dis;
    printf("Enter the x and y cordinates of first point");
    a=input();
    printf("Enter the x and y cordinates of second point");
    b=input();
    dist(a,b,&dis);
    output(a,b,dis);
    return 0;
}