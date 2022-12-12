#include <stdio.h>

void input(int *n1,int *d1,int *n2,int *d2)
{
    printf("Enter the numretor and denominator of first number you want to add-");
    scanf("%d %d",n1,d1);
    printf("Enter the numretor and denominator of second number you want to add-");
    scanf("%d %d",n2,d2);
}

void add(int n1,int d1,int n2,int d2,int *r_n,int *r_d)
{
    int r1,r2,i;
    n1=n1*d2;
    n2=n2*d1;
    r1=n1+n2;
    r2=d1*d2;
    for(i=2;i<50;i++)
{
    
    while(r1%i==0 && r2%i==0)
    {
        r1=r1/i;
        r2=r2/i;
    }
    }
    *r_n=r1;
    *r_d=r2;
}

void output(int n1,int d1,int n2,int d2,int r_n,int r_d)
{
    printf("%d/%d + %d/%d = %d/%d",n1,d1,n2,d2,r_n,r_d);
}

int main()
{
    int n1,d1,n2,d2,r_n,r_d;
    input(&n1,&d1,&n2,&d2);
    add(n1,d1,n2,d2,&r_n,&r_d);
    output(n1,d1,n2,d2,r_n,r_d);
    return 0;
}