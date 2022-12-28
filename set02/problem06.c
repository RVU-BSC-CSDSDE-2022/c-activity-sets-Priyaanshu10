#include <stdio.h>

int input_n()
{
    int n;
    printf("How many number you want to add-")-
    scanf("%d",&n);
    return n;
}

void input(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter the %d number-",i+1);
    scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
    float avg=0;
    int j=0,i;
    // printf("%d",a[1]);
    for(i=0;i<n;i++)
    {if(a[i]%2!=0)
    {avg=avg+a[i];
    j=j+1;}}
    avg=avg/j;
    return avg;
}

void output(float avg)
{
    printf("The avrage fo odd numbers from those is %.1f",avg);
}

int main()
{
    int n,a[20];
    float avg;
    n=input_n();
    input(n,a);
    avg=odd_average(n,a);
    output(avg);
    return 0;
}