#include<stdio.h>

typedef struct complex
{
  float real;
  float imag;
} cmp;

cmp input (cmp, cmp);
cmp
input (cmp a, cmp b)
{
  cmp temp;
  temp.real = a.real + b.real;
  temp.imag = a.imag + b.imag;
  return temp;
}

int main ()
{
  cmp a, b, result;

  printf ("Enter the real part and imaginary part: ");
  scanf ("%f %f", &a.real, &a.imag);
  printf ("The first number is %.0f+%.0fi \n", a.real, a.imag);
  printf("Enter the real part and imaginary part  of 2nd complex number: ");
  scanf ("%f %f", &b.real, &b.imag);
  printf ("The second number is %.0f+%.0fi \n", b.real, b.imag);
  result = input (a, b);
  printf ("The sume of %.0f+%.0fi and %.0f+%.0fi is %.0f+%.0fi",a.real, a.imag,b.real, b.imag, result.real, result.imag);
  return 0;
}