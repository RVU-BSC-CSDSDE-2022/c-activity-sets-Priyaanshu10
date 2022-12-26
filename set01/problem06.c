#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

void compare(int a, int b, int c, int *largest)
{
    if(a>b && a>c)
    *largest=a;
    else if(b>a && b>c)
    *largest=b;
    else
    *largest=c;
}

void output(int a, int b, int c, int largest)
{
    printf("The largest of %d , %d and %d is %d",a,b,c,largest);
}

int main()
{
    int a,b,c,largest;
    printf("Enter first number-");
    a=input();
    printf("Enter second number-");
    b=input();
    printf("Enter third number-");
    c=input();
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}