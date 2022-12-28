#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the radius of Camel-");
    scanf("%f",radius);
    printf("Enter the helight of Camel-");
    scanf("%f",height);
    printf("Enter the length of Camel-");
    scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
    float weight,hl,a,b;
    hl=height*length;
    a=hl/2;
    while(a!=b)
    {
        b=a;
        a=(hl/b+b)/2;
    }
    weight=3.141592*radius*radius*radius*a;
    printf("%f",weight);
}

int main()
{
    float radius,height,length,weight;
    input_camel_details(&radius,&height,&length);
    weight=find_weight(radius,height,length);
    return 0;
}