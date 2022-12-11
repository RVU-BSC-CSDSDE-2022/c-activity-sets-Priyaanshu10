#include <stdio.h>
	int input();
	int input()
	{
	    int a;
	    printf("Enter a number to get the square root:");
	    scanf("%d",&a);
	    return a;
	}
	float sq(float);
	float sq(float n)
	{
        float a,b;
    	a=n/2;
    	b=0;
    	while(a!=b)
    	{
    	b=a;
    	a=(n/b+b)/2;
     	}
    	return a;
	}
	void output(int,float);
	void output(int x,float y)
	{
	    printf("\nThe square root of %d is %f",x,y);
	}
	int main()
	{
	int num;
	float k;
	num=input();
	k=sq(num);
    output(num,k);
    return 0;
	}