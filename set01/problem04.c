#include <stdio.h>

int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

void add(int a, int b, int *sum)
{
    *sum=a+b;
}

void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}

int main()
{
    int a,b,sum;
    printf("Enter first number-");
    a=input();
    printf("Enter second number-");
    b=input();
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}