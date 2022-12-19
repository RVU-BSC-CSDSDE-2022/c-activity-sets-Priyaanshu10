// int find_gcd(int a, int b);
// Fraction add_n_fractions(int n, Fraction f[n]);
// void output(int n, Fraction f[n], Fraction sum);

#include <stdio.h>

typedef struct fraction
{
    int n,d;
}frac;

int input_n()
{
    int n;
    printf("How many fractions you want to add-");
    scanf("%d",&n);
    return n;
}

void input_n_fractions(int n, frac a[n])
{
    int i;
    for(i=0;i<n;i++)
    {printf("Enter the numerator and denominator of %d fraction-",i+1);
    scanf("%d %d",&a[i].n,&a[i].d);
    }
}

frac add_n_fractions(int n,frac a[n])
{
    int i;
    frac r;
    r.d=1,r.n=0;
    for(i=0;i<n;i++)
    {
        r.d=r.d*a[i].d;
    }
    for(i=0;i<n;i++)
    {
        a[i].n=a[i].n*r.d;
    }
    for(i=0;i<n;i++)
    {
        r.n=r.n+a[i].n;
    }
    // printf("%d/%d",r.n,r.d);
    return r;
}

int main()
{
    int n;
    frac a[49],r;
    n=input_n();
    input_n_fractions(n,a);
    r=add_n_fractions(n,a);
}