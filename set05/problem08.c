// void output(int n, Fraction f[n], Fraction sum);

#include <stdio.h>

typedef struct Fraction
{
    int n,d;
}frac;

int input()
{
    int n;
    printf("How many fractions you want to add-");
    scanf("%d",&n);
    return n;
}

void input_n_fractions(int n,frac a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the numerator and denominator of %d number-",i+1);
        scanf("%d %d",&a[i].n,&a[i].d);
    }
}

frac add_n_fractions(int n,frac a[n])
{
    int i;
    frac r;
    r.d=1;
    r.n=0;
    for(i=0;i<n;i++)
    r.d=r.d*a[i].d;
    for(i=0;i<n;i++)
    {a[i].n=a[i].n*r.d;
    r.n=r.n+a[i].n;
    }
    // printf("%d/%d\n",r.n,r.d);
    for(i=2;i<50;i++)
    {
    while(r.n%i==0 && r.d%i==0)
    {
        r.n=r.n/i;
        r.d=r.d/i;
        printf("%d/%d\n",r.n,r.d);
    }
    }
    printf("%d/%d\n",r.n,r.d);
    return r;
}

// void output(int n, frac r)

int main()
{
    int n;
    frac a[20],r;
    n=input();
    input_n_fractions(n,a);
    r=add_n_fractions(n,a);
}