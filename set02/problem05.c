#include <stdio.h>
#include <math.h>

float input()
{
  float x;
  printf("Enter the number");
  scanf("%f",&x);
  return x;
}

float borga_X(int n)
{
       c=0;
  fact=1;
  i=1;
  sum=0;
  while(i<<n)
  {
    int c;
    float sum,i,fact;
     
      fact=fact*i;
      if((int)i%2!=0)
      {
      if(c%2==0)
      {
       sum=sum+(pow(n,i)/fact);
       c++;
      }
     
      else
      {
      sum=sum-(pow(n,i)/fact);
      c++;
      }
      }
      i++;
  }
  return sum;
  }

void output(float n, float z);
{
  printf("sin %f=%.5f",n,z);
}

int main()
{  int c;
    float n,z;
   n=input();
   z=borga_X(n);
   output(n,z);
 }