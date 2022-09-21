#include<stdio.h>
#include<math.h>

float input(float);
float input(float a)
{ 
float k;
k=sqrt(a);
return k;
}

int main()
{
float a,g;
printf("Enter the number:");
scanf("%f",&a);
g= input(a);
printf("Squareroot of %f is %.2f\n",a,g);
return 0;
}