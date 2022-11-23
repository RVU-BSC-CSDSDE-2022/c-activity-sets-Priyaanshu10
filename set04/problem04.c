#include<stdio.h>

int input()
{ int n ;
 printf("Enter n:");
 scanf("%d",&n); 
 return n;
}

int find_fibo(int n)
{
    int t1,t2,fibo,i;
    t1=0;t2=1,fibo=2;
    for (i = 2; i <= n; i++) 
    {
    fibo = t1 + t2;
    t1 = t2;
    t2 = fibo;
    }
  return fibo;
}

void output(int fibo)
{
printf("%d",fibo);
}

int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(fibo);
  return 0;
}