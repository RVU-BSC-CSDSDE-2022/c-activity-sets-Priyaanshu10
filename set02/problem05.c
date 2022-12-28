#include <stdio.h>
#include <math.h>

int input()
{
    int x;
    printf("Enter the number you want borga of-");
    scanf("%d",&x);
    return x;
}

float borga_X(int x)
{
    int i,j,fact;
    float term,sum,p;
    sum=0,term=1,fact=1;
    for(i=1;term>0.000001;i++)
    {
        fact=fact*i;
        if(i%2!=0)
        {
            j=(i-1)/2;
            p=pow(x,j);
            term=p/fact;
            sum=sum+term;
        }
    }
    return sum;
}

void output(int x, float result)
{
    printf("The borga of %d is %f",x,result);
}

int main()
{
    int x;
    float sum;
    x=input();
    sum=borga_X(x);
    output(x,sum);
    return 0;
}