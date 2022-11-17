#include <stdio.h>

int input()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    return a;
}

int find_gcd(int a, int b)
{
    int i, min, hcf=1;
    min = (a<b) ? a : b;

    for(i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
}

void output(int a, int b, int gcd)
{
    printf("HCF of %d and %d = %d\n", a, b, gcd);
}

int main()
{
    int num1, num2,hcf;
    num1=input();
    num2=input();
    hcf=find_gcd(num1,num2);
    output(num1, num2, hcf);
    return 0;
}