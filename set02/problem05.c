#include <stdio.h>
#include <math.h>

int main()
{
    float sum,term,p;
    int x,j,i,fact;
    printf("Enter x ");
    scanf("%d",&x);
    sum =0;
    fact = 1, term = 1; 
    for (i=1;term>0.000001;i++)
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
    printf("%f",sum);
    return 0;
}