#include <stdio.h>
int input_n()
{  int n;
  printf("Enter array sizem:");
  scanf("%d", &n);
    return n;
}
void input(int n, int a[n])
{
  for(int i=0;i<n;i++)
  { printf("Enter the elements 0f the array");
    scanf("%d",&a[i]);
  }
}
float odd_average(int n, int a[n])
{ int sum;
  int j=0; 
  float avg;
  for(i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
        sum=sum+a[i];
        j++;
      }
     }
  avg=sum/j;
  return avg;
}
void output(float avg)
{
  printf("The average of odd numbers in the array is %f", avg);
}

int main()
{ int c;
 
  float average;
  c = input_n();
  int a[c];
	input(c,a);
   average=odd_average(c,a);
	output(average);
	return 0;
}