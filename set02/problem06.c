#include <stdio.h>
int input_n()
{  int z;
  printf("Enter array size:");
  scanf("%d",&z);
    return z;
}
void input(int z, int a[z])
{
  for(int i=0;i<z;i++)
  { printf("Enter the elements 0f the array");
    scanf("%d",&a[i]);
  }
}
float odd_average(int z, int a[z])
{ int sum;
  int j=0; 
  float avg;
  for(i=0;i<z;i++)
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