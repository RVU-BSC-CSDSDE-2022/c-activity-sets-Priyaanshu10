#include <stdio.h>
int main()
{
int n, i, sum;

  printf("Enter a number: ");
  scanf("%d", &n);
  sum=0;
  for (i = 1; i <= n;i++)
  sum=sum+i;
  printf("Sum=%d\n",sum);
  return 0;
}