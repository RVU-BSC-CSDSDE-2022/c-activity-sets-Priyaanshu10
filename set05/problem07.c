#include <stdio.h>

typedef struct Fraction
{
    int n,d;
}frac;

frac input()
{
    frac a;
    scanf("%d %d",&a.n,&a.d);
    return a;
}

frac add_fractions(frac a,frac b)
{
    frac r;
    a.n=a.n*b.d;
    b.n=b.n*a.d;
    r.d=a.d*b.d;
    r.n=a.n+b.n;
    return r;
}

int find_gcd(int a, int b)
{
    int g,i;
    for(i=1; i <= a && i <= b; i++)
    {
        if(a%i==0 && b%i==0)
            g=i;
    }
    return g;
}

void output(frac a,frac b,frac r)
{
    printf("The sum of %d/%d and %d/%d is %d/%d",a.n,a.d,b.n,b.d,r.n,r.d);
}

int main()
{
    frac a,b,r;
    int g;
    printf("Enter the numerator and denominator of first number");
    a=input();
    printf("Enter the numerator and denominator of second number");
    b=input();
    r=add_fractions(a,b);
    g=find_gcd(r.n,r.d);
    r.n=r.n/g;
    r.d=r.d/g;
    output(a,b,r);
    return 0;
}