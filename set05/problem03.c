
void output(int n, int r, int result);

#include <stdio.h>

void input(int *n, int *r)
{
    printf("Enter n and r\n");
    scanf("%d %d",n,r);
}

int nCr(int n, int r)
{
    int a,b,c,z,i,d;
    int result;
    a=1;
    b=1;
    c=1;
    z=0;
    for(i=1;i<=n;i++)
    a=a*i;
    z=n-r;
    for(i=1;i<=z;i++)
    b=b*i;
    for(i=1;i<=r;i++)
    c=c*i;
    d=b*c;
    result=a/d;
    return result;
}

void output(int n, int r, int result)
{
    printf("for n=%d and r=%d, nCr=%d",n,r,result);
}

int main()
{
    int n,r;
    int result;
    input(&n,&r);
    result=nCr(n,r);
    output(n,r,result);
}