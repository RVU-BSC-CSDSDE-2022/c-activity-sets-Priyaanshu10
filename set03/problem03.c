#include <stdio.h>

int input()
{
    int n;
    printf ("Enter a number: ");
    scanf ("%d",&n);
    return n;
}

int is_composite(int n)
{
    int i,c=0,flag;
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if (c==2)
    flag=1;
    else
    flag=0;
    return flag;
}

void output(int n, int flag)
{
    if(flag==1)
    printf ("The number is not composite");
    else
    printf ("The number is composite");
}

int main()
{
    int n,flag;
    n=input();
    flag=is_composite(n);
    output(n,flag);
    return 0;
}