#include <stdio.h>

int array_size()
{
    int n;
    printf("How many numbers you want to add");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the %d number",i+1);
        scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
    int p=0,big,i;
    big=a[0];
    for(i=1;i<n;i++)
    {
        if(big<a[i])
        {big=a[i];
        p=i;}
    }
    return p;
}

void output(int index)
{
    printf("The index of the largest number in the array is %d",index);
}

int main()
{
    int n,index,a[50];
    n=array_size();
    input_array(n,a);
    index=find_largest_index(n,a);
    output(index);
    return 0;
}