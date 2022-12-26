#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int compare(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else 
    return c;
}

void output(int a,int b,int c,int l)
{
    printf("The largest of %d , %d and %d is %d",a,b,c,l);
}

int main()
{
    int a,b,c,l;
    printf("Enter first number-");
    a=input();
    printf("Enter second number-");
    b=input();
    printf("Enter third number-");
    c=input();
    l=compare(a,b,c);
    output(a,b,c,l);
    return 0;
}