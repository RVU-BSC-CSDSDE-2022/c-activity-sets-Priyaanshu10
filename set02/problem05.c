#include <stdio.h>
#include <math.h>
 
int fact(int n)
{
    if (n == 1)
        return 1;
 
    return n * fact(n - 1);
}

double sum(int x, int n)
{
    double i, total = 1.0;
 
    for (i = 1; i <= n; i++) {
        total = total + (pow(x, i) / fact(2* i + 1));
    }
 
    return total;
}
 
int input()
{
  int x;
  printf("Enter x ")
  scanf("%d",&x);
  return x;
}

void output(int x, int n)
{
    printf("Sum is: %f", sum(x, n));
}

int main()
{
    x=input();
    output(x,n);
    return 0;
}