#include<stdio.h>
typedef struct complex
{
  float real;
  float imag;

} complex;

complex dump (int, complex[]);
complex
dump (int n, complex c1[n])
{
  complex sum, r, result;
  int i;
  sum.real = 0;



  for (i = 0; i < n; i++)
    {
      result.real = result.real + c1[i].real;
      result.imag = result.imag + c1[i].imag;
    }


  return result;
}


int
main ()
{
  int n, i;
  complex c1[10], k;
  printf ("Enter the number of complex numbers to be added:");
  scanf ("%d", &n);

  for (i = 0; i < n; i++)
    {
      printf ("Enter the %d complex  number:", i + 1);
      scanf ("%f %f", &c1[i].real, &c1[i].imag);
    }


  k = dump (n, c1);
  printf ("The sum of all the complex numbers is %.0f+%.0fi", k.real, k.imag);
  return 0;
}