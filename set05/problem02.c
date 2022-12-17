#include <stdio.h>

typedef struct Fraction
{
    float n,d;
}frac;

frac input()
{
    frac a;
    scanf("%f %f",&a.n,&a.d);
    return a;
}

frac compare(frac a,frac b,frac c)
{
    float p,q,r;
    p=a.n/a.d;
    q=b.n/b.d;
    r=c.n/c.d;
    if(p<q && p<r)
    return a;
    else if(q<p && q<r)
    return b;
    else 
    return c;
}

int main()
{
    frac a,b,c,smallest;
    printf("Enter the numerator and denominator of first number-");
    a=input();
    printf("Enter the numerator and denominator of second number-");
    b=input();
    printf("Enter the numerator and denominator of third number-");
    c=input();
    smallest=compare(a,b,c);
    printf("The smallest fraction is %.0f/%.0f",smallest.n,smallest.d);
    return 0;
}